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

#ifndef XMLOP_H
#define XMLOP_H
#include <QtXml>
#include <QtCore>
#include <QtGui/QMessageBox>
class xmlop:public QWidget
{
        Q_OBJECT
public:
        xmlop();
        ~xmlop();

        QDomDocument getSource();//source xml veritabanım olacak.
        QStringList getElementNames();
        QDomElement getCurrentElement();
        QString getSharePath();
        QSettings settings;//dosya yolunu burdan al.
        QString sourcep;//source "veritabanım" ın yolu. sourcePath yap.
        QDomElement currentElement;
        QDomDocument source;
        QString getSourcePath();
        QString getSourcePath(const QString & replace);
signals:
public slots:
        void setSource(const QString & fileName);
        void setElementNames();//emits elmentNamesSignal
        void setCurrentElement(const QString & elementName);
        bool writeSourceTofile(QDomDocument xml_source ,const QString & fileName);
        bool checkFile(const QString & fileName);
private:
        QStringList elementNames;
        QDomDocument readImtToMemory(const QString & fileName);
        QStringList  readElementNames(QDomDocument xml_source);//Kpds , Zarflar , ... vs.
};
#endif// XMLOP_H
