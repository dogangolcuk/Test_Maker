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

#include "xmlop.h"
xmlop::xmlop()
{

        QString defaultFilePath = QDir::homePath() + "/.imtihan/";
        settings.setValue("sharePath",defaultFilePath);
}
xmlop::~xmlop(){}

QDomDocument xmlop::readImtToMemory(const QString & fileName)
{
        QDomDocument imtFile;
        QFile tmp(fileName);
        tmp.open(QIODevice::ReadOnly| QIODevice::Text);
        imtFile.setContent(&tmp);
        return  imtFile;
}
bool xmlop::writeSourceTofile(QDomDocument xml_source ,const QString & outfileName)
{
        QFile tmp(outfileName);
        tmp.open(QIODevice::WriteOnly);
        QString xml_text = xml_source.toString();
        QTextStream out(&tmp);
        out.setCodec ("UTF8");
        out << xml_text;
        tmp.close();
        return 1;
}
QStringList xmlop::readElementNames(QDomDocument xml_source)
{

        QStringList tmp_list;
        QDomElement element = xml_source.firstChildElement();
        for (QDomNode n = element.firstChild(); !n.isNull(); n = n.nextSibling()) {
                QDomElement e = n.toElement();
                QString s =e.tagName() ;
                tmp_list.append(s);
        }
        return tmp_list;
}
void xmlop::setSource(const QString & fileName)
{
        source=readImtToMemory(fileName);
}

void xmlop::setElementNames()
{
        elementNames=readElementNames(source);
}
QDomDocument xmlop::getSource()
{
        return source;
}
QStringList xmlop::getElementNames()
{
        return elementNames;
}
void xmlop::setCurrentElement(const QString & elementName)
{
        QDomElement root = source.firstChildElement();
        currentElement= root.firstChildElement(elementName);
}
QDomElement xmlop::getCurrentElement()
{
        return currentElement;
}
QString xmlop::getSharePath()
{
        QVariant tmp =settings.value("sharePath");
        QString sharePath = tmp.toString();
        return sharePath;
}
bool xmlop::checkFile(const QString & fileName)
{
        QFile dosya(fileName);
        if (dosya.exists())
                return 1 ;
        return 0 ;
}
QString xmlop::getSourcePath()
{
        QVariant tmp =settings.value("SourcePath");
        QString sourcePath = tmp.toString();
        return sourcePath;
}
QString xmlop::getSourcePath(const QString & replace)
{
        QVariant tmp =settings.value("SourcePath");
        QString sourcePath = tmp.toString();
        sourcePath.replace(QString("/"), QString(replace));
        return sourcePath;
}
