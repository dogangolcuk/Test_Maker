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
#ifndef ZIPDATA_H
#define ZIPDATA_H
#include "xmlop.h"
class zipData:public xmlop
{
private:


public:
        zipData() {
                QVariant tmp2 =settings.value("SourcePath");
                QString sourcePath = tmp2.toString();
                setSource(sourcePath);
//  QByteArray unzipped = source.toByteArray();

                QString tmpzip = source.toString();
                QByteArray unzipped = tmpzip.toLocal8Bit();
                QByteArray zipped = qCompress(unzipped , 9);
//dosya zipleniyor Fakat aÃ§Ä±lÄ±rken tÃ¼rkÃ§e karakterler bozuluyor.
                writeByteTofile(zipped , getSharePath()+"zipp");
                QByteArray reunzip = qUncompress(zipped);
                writeByteTofile(reunzip , getSharePath()+"unzipp.imt");

        };
        ~zipData() {} ;
        bool writeByteTofile(QByteArray &byte ,const QString & outfileName) {
//         QFile  dosya(getSourceFilePath()+outfileName);
//         QFile  tmp(getSharePath()+outfileName);//getSharePath() i sil
                QFile tmp(outfileName);
                // QFile  dosya(outfileName);
                // QFile  dosya(settings.value("files/sourceFilePath")+outfileName);
                tmp.open(QIODevice::WriteOnly);
//         QString xml_text = xml_source.toString();
                QTextStream out(&tmp);
//         out.setCodec ("UTF-8");
                out << byte;
                tmp.close();
                return 1;
        }
};
#endif
