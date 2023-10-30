/***************************************************************************
 *   Copyright (C) 2007 by dogangolcuk   *
 *   dogangolcuk@gmail.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "user.h"
user::user(const QString & uname,const QString & cE )
{
        setUserName(uname);
        setSource(getSharePath()+userName);
        QDomElement droot = source.firstChildElement();
        QDomElement root = droot.firstChildElement(getSourcePath("_"));
        currentElement= root.firstChildElement(cE);
        userFileChanged=false;
        setAnsweredWordsList();
}
user::~user()
{
        maybeSave();
}
void user::setUserName(const QString & uname)
{
        userName=uname;
}
void user::setAnsweredWordsList()
{
        tmpSource=getSource();
        QDomElement dataroot = getSource().firstChildElement();
        QDomElement root = dataroot.firstChildElement(getSourcePath("_"));
        QDomElement elemen = root.firstChildElement(getCurrentElement().tagName());
        QDomElement soru = elemen.firstChildElement("soru");
        trueAnsweredList.clear();
        falseAnsweredList.clear();
        for (; !soru.isNull(); soru  = soru.nextSiblingElement("soru")) {


                QDomAttr index = soru.attributeNode("index");
                QDomAttr durum = soru.attributeNode("durum");
                QString index_str = index.value();
                int index_int= index_str.toInt();
                QString durum_str = durum.value();
                int durum_int= durum_str.toInt();
                if (durum_int == 1 ) {
                        trueAnsweredList.append(index_int);
                }
                if (durum_int == 0) {
                        falseAnsweredList.append(index_int);
                }

                allAnsweredList.append(index_int);
        }

        return ;



}

bool user::setCurrentState(int index , int durum)
{
        if (!allAnsweredList.contains(index)) {
                QDomElement data_root = tmpSource.firstChildElement();
                QDomElement root = data_root.firstChildElement(getSourcePath("_"));
                if (root.isNull()) {
                        QDomElement yeni_data = tmpSource.createElement(getSourcePath("_"));

                        setSource(getSourcePath());
                        setElementNames();
                        QStringList eName=getElementNames();
                        for (int i=0;i<eName.size();i++) {
                                QString elemen=eName.at(i);
                                QDomElement el=tmpSource.createElement(elemen);

                                yeni_data.appendChild(el);
                        }//end for
                        data_root.appendChild(yeni_data);
                }
                root = data_root.firstChildElement(getSourcePath("_"));//sourcep = source Path yolu
                QDomElement  elemen = root.firstChildElement(currentElement.tagName());
                QDomElement soru = tmpSource.createElement ("soru");
                soru.setAttribute("index",index);
                soru.setAttribute("durum",durum);// 0 yanlÄ±Å . 1 doÄru demek.
                QDomText index_text = tmpSource.createTextNode(".");
                soru.appendChild(index_text);
                elemen.appendChild(soru);

                userFileChanged=true;
                return true;
        } else
                return false;

}
bool user::makeUserFile()
{

        QDomDocument doc("IMTIHAN_USER_FILE");
        QDomElement  data_root = doc.createElement(userName);
        QDomElement root=doc.createElement(getSourcePath("_"));
        setSource(getSourcePath());
        setElementNames();
        QStringList eName=getElementNames();
        for (int i=0;i<eName.size();i++) {
                QString elemen=eName.at(i);
                QDomElement el=doc.createElement(elemen);

                root.appendChild(el);
        }
        data_root.appendChild(root);
        doc.appendChild(data_root);
        writeSourceTofile(doc ,getSharePath()+userName);
        setSource(getSharePath()+userName);
        return true;

}
void user::update_allAnsweredList(int index)
{
        allAnsweredList.append(index);
        emit allAnsweredListChanged(allAnsweredList);
}
void user::update_trueAnsweredList(int index)
{
        trueAnsweredList.append(index);
}
void user::update_falseAnsweredList(int index)
{
        falseAnsweredList.append(index);
}
QList<int> user::get_trueAnsweredList()
{
        return trueAnsweredList;

}
QList<int> user::get_allAnsweredList()
{
        return allAnsweredList;

}
QList<int> user::get_falseAnsweredList()
{
        return falseAnsweredList;

}

int user::get_allAnsweredListSize()
{
        return allAnsweredList.size();
}
int user::get_trueAnsweredListSize()
{
        return trueAnsweredList.size();
}
int user::get_falseAnsweredListSize()
{
        return falseAnsweredList.size();
}
bool user::maybeSave()
{
        if (userFileChanged) {

                if (
                        QMessageBox::question(
                                0,
                                trUtf8("Uyarı"),
                                trUtf8("'%1' adlı kullanıcının dosyası değişti.\n"
                                                  "Değişiklikleri kaydetmek istiyor musunuz?").arg(userName),
                                trUtf8("Evet"),
                                trUtf8("Hayır"),
                                QString(), 1, 0 | QMessageBox::Default | QMessageBox::Escape) == 0
                )
                        return  writeSourceTofile(tmpSource ,getSharePath()+userName);
        }
        return true;
}
QDomDocument user::get_tmpSource()
{
        return tmpSource;

}
