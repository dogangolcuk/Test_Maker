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

#ifndef WORDSAVE_H
#define WORDSAVE_H
#include "xmlop.h"
class wordSave:public xmlop
{
private:
QString sourceFilePath;//xml dosyasının yolu + adı
QString importFile;//aktarılacak text dosyası

 public:
wordSave(){};
~wordSave(){} ;
bool setImportFile(const QString & filePath);
bool kelime_ekle(QDomDocument  xml_icerik ,const QString &  soru , const QString & cevap );//Tek tek elle kelime eklemek istediğim zaman bunu kullanıyorum.eski_xml_dosyasi na ekler.
QDomDocument makeImportedXml(QDomDocument sourceXml);
bool yeni_bolum_olustur(const QString &yeni_bolum_adi);
};
#endif //WORDSAVE_H
