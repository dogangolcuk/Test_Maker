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

#include "wordSave.h"
#include <iostream>

bool wordSave::setImportFile(const QString & filePath)//kaynak dosya
{
        importFile=filePath;
        return 1;
}
QDomDocument wordSave::makeImportedXml(QDomDocument  xml_icerik)
{
        QDomElement root = xml_icerik.firstChildElement();
        QDomElement elemen = root.firstChildElement(getCurrentElement().tagName());
        QFile dosya(importFile);
        dosya.open(QIODevice::ReadOnly);

        QTextStream in(&dosya);
        in.setCodec("Utf8");
        while (!in.atEnd()) {
                QString str = in.readLine();
                QStringList list = str.split("#");
//               std::string  eklenecek = str.toStdString();
//               std::cout<< "Eklendi---->> "  << eklenecek << "\n";
                QDomElement kelime = xml_icerik.createElement ("kelime");
                QDomElement soru = xml_icerik.createElement ("soru");
                QDomElement cevap = xml_icerik.createElement ("cevap");
                QDomElement ornek = xml_icerik.createElement("ornek");
                QDomText soru_text = xml_icerik.createTextNode(list[0]);
                QDomText cevap_text = xml_icerik.createTextNode(list[1]);
                QDomText ornek_text = xml_icerik.createTextNode(list[2]);
                soru.appendChild(soru_text);
                cevap.appendChild(cevap_text);
                ornek.appendChild(ornek_text);

                kelime.appendChild(soru);
                kelime.appendChild(cevap);
                kelime.appendChild(ornek);
                elemen.appendChild(kelime);



        }
        return xml_icerik;
}

bool wordSave::kelime_ekle(QDomDocument  xml_icerik , const QString &soru_const , const QString &cevap_const )
{

        QDomElement root = xml_icerik.firstChildElement();
        QDomElement elemen = root.firstChildElement(getCurrentElement().tagName());

        QDomElement kelime = xml_icerik.createElement ("kelime");
        QDomElement soru = xml_icerik.createElement ("soru");
        QDomElement cevap = xml_icerik.createElement ("cevap");

        QDomText soru_text = xml_icerik.createTextNode(soru_const);
        QDomText cevap_text = xml_icerik.createTextNode(cevap_const);

        soru.appendChild(soru_text);
        cevap.appendChild(cevap_text);

        kelime.appendChild(soru);
        kelime.appendChild(cevap);
        elemen.appendChild(kelime);


        return 1;
}

bool wordSave::yeni_bolum_olustur(const QString & yeni_bolum_adi)
{
        setElementNames();
        if (!getElementNames().contains(yeni_bolum_adi)) {
                QDomElement root = getSource().firstChildElement();
                QDomElement yeni_element = getSource().createElement(yeni_bolum_adi);
                root.appendChild(yeni_element);
                qDebug("Oluştu");
                return 1;
        } else {
                qDebug("Zaten Bölüm var");
                return 0;
        }

}

