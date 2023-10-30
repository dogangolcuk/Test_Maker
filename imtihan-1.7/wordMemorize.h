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

#ifndef WORDMEMORIZE_H
#define WORDMEMORIZE_H
#include "xmlop.h"
#include <QFileDialog>
class wordMemorize:public xmlop
{
        Q_OBJECT

public slots:
        QList<QString> soru_listesi_olustur(QList<int> cevaplananlarListesi);//boyutu 6. 0. index te soru var .Diğer 5 i cevaplar.
        QList<QString> soru_listesi_olustur_ters(QList<int> cevaplananlarListesi);
public:
        wordMemorize();
        wordMemorize(const QString & sorulacak_bolum_ismi);
        ~wordMemorize();
        int kackelimevar();
        QDomNode kelimeye_git(int index_no);//verilen elemntte i index nolu kelimeye gider.
        QString soruyu_al(int index);
        QString cevabi_al(int index);
        QString ornek_al(int index);
        QList< int > tam_kelime_listesi();//verilen kelime grubunun(element) tam kelime listesi rakam olarak tutulur.
        QPair<QString, QString> soru_cevap_cifti_olustur(int index);//soru cevap çifti oluşturur.
        int rastgele_sayi(int ilk , int son );// ilk ve son arasÄ±nda rastgele rakam oluşturur.liste_karistir da kullandım.
        QList<int> liste_sayi_doldur();// 0 dan  başlar.
        QList<int> liste_sayi_doldur(int boyut);// 1 den başlar.liste boyutu "boyut" olur
        QList<int> liste_karistir(QList<int> liste);
        QList<int> liste_fark_al(QList<int> liste1 , QList<int> liste2);//liste1 cevaplananlar , liste2 tamliste
        void tam_soru_listesi_set();
        QStringList tum_kelimeler_soru();
        QStringList tum_kelimeler_cevap();
        int getTermIndex();
        bool setDataFileName();
private:
        int soru_index;
        QList<int> tam_soru_listesi;
        QList<int> sorulacaklar_listesi;
};
#endif //WORDSAVE_H
