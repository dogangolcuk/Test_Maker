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

#include "wordMemorize.h"
wordMemorize::wordMemorize()
{
        QVariant tmp2 =settings.value("SourcePath");
        QString sourcePath = tmp2.toString();
        setSource(sourcePath);
        setElementNames();
}
wordMemorize::wordMemorize( const QString & sorulacak_bolum_ismi)
{
        QVariant tmp2 =settings.value("SourcePath");
        QString sourcePath = tmp2.toString();
        setSource(sourcePath);
        setCurrentElement(sorulacak_bolum_ismi);
        tam_soru_listesi_set();
}

wordMemorize::~wordMemorize(){}

QDomNode wordMemorize::kelimeye_git( int index_no)
{

        QDomNodeList kelime_node_list =getCurrentElement().elementsByTagName("kelime");
        QDomNode kelime_nod = kelime_node_list.item(index_no);//burda istediÃÂim index noya gidiyorum
        return kelime_nod;
}


QString wordMemorize::soruyu_al(int index)
{

        QDomNode node = kelimeye_git(index);
        QDomElement soru_element = node.firstChildElement("soru");
        QString soru = soru_element.text();
        return soru;
}

QString wordMemorize::cevabi_al(int index)
{

        QDomNode node =kelimeye_git(index);
        QDomElement cevap_element = node.firstChildElement("cevap");
        QString cevap = cevap_element.text();
        return cevap;
}

QString wordMemorize::ornek_al(int index)
{

        QDomNode node =kelimeye_git(index);
        QDomElement ornek_element = node.firstChildElement("ornek");
        QString ornek;
        if (ornek_element.isNull())
                ornek = trUtf8("Örnek Cümle Yok.");
        else
                ornek = ornek_element.text();
        return ornek;
}

int wordMemorize::kackelimevar()//sadece sorulacak bolumde kaÃÂ§ kelime olduÃÂunu dÃÂ¶ndÃÂ¼rÃÂ¼r.
{
        QDomNodeList kelimesay = getCurrentElement().elementsByTagName("kelime");
        return kelimesay.count();
}

QList<int> wordMemorize::tam_kelime_listesi()
{
        QList<int> tam_liste;
        for (int i=1 ; i<=kackelimevar() ; i++)
                tam_liste.append(i);
        return tam_liste;
}

QPair<QString, QString> wordMemorize::soru_cevap_cifti_olustur(int index)
{
        QPair<QString,QString> soru_cevap_cifti;
        soru_cevap_cifti.first = soruyu_al(index);
        soru_cevap_cifti.second = cevabi_al(index);
        return soru_cevap_cifti;
}

QList< QString > wordMemorize::soru_listesi_olustur(QList<int> cevaplananlarListesi)
{

        sorulacaklar_listesi =liste_fark_al(cevaplananlarListesi , tam_soru_listesi);
        QList<int> sorulacaklar_listesi_karisik =liste_karistir(sorulacaklar_listesi);
        soru_index=sorulacaklar_listesi_karisik.at(0);

//burada 4 adet yanlış şık oluşturcam.soru_index teki soruyu sildimki yanlş cevaplar içine
//doğru cevap girmesin.
        QList<int> dolu_liste = liste_sayi_doldur();//listenin iÃÂ§indeki deÃÂerler.  0-1-2-3....kelime_sayisi
        dolu_liste.removeAt(soru_index);
        QList<int> dolu_liste_karisik =liste_karistir(dolu_liste);
        QString sahte_cevap_1 =cevabi_al( dolu_liste_karisik.at(1));
        QString sahte_cevap_2 =cevabi_al( dolu_liste_karisik.at(2));
        QString sahte_cevap_3 =cevabi_al( dolu_liste_karisik.at(3));
        QString sahte_cevap_4 =cevabi_al( dolu_liste_karisik.at(4));


        QString soru =   soru_cevap_cifti_olustur( sorulacaklar_listesi_karisik.at(0) ).first   ;
        QString cevap =  soru_cevap_cifti_olustur( sorulacaklar_listesi_karisik.at(0) ).second  ;
// cevap=qcevap;//cevap xml clasÃÂ±nÃÂ±n ÃÂ¼yesi

        QList<int> cevap_siklari=liste_sayi_doldur(5);// listenin iÃÂ§indeki deÃÂerler   1-2-3-4-5
        QList<int> cevap_siklari_karisik =liste_karistir(cevap_siklari);
        QList<QString> soru_listesi;
        soru_listesi.insert(0 , soru );//burasÃÂ± sabit soru buraya gelir.
        soru_listesi.insert(cevap_siklari_karisik.at(0) ,  sahte_cevap_1);// a ÃÂÃÂ±kkÃÂ±
        soru_listesi.insert(cevap_siklari_karisik.at(1)  , cevap);        // b ÃÂÃÂ±kkÃÂ±
        soru_listesi.insert(cevap_siklari_karisik.at(2)  , sahte_cevap_2);// c ÃÂÃÂ±kkÃÂ±
        soru_listesi.insert(cevap_siklari_karisik.at(3)  , sahte_cevap_3);// d ÃÂÃÂ±kkÃÂ±
        soru_listesi.insert(cevap_siklari_karisik.at(4)  , sahte_cevap_4);// e ÃÂÃÂ±kkÃÂ±
        return soru_listesi;

}

QList< QString > wordMemorize::soru_listesi_olustur_ters(QList<int> cevaplananlarListesi)
{

        sorulacaklar_listesi =liste_fark_al(cevaplananlarListesi , tam_soru_listesi);
        QList<int> sorulacaklar_listesi_karisik =liste_karistir(sorulacaklar_listesi);
        soru_index=sorulacaklar_listesi_karisik.at(0);

//burada 4 adet yanlÃÂ±ÃÂ ÃÂÃÂ±k oluÃÂturcam.soru_index teki soruyu sildimki yanlÃÂ±ÃÂ cevaplar iÃÂ§ine
//doÃÂru cevap girmesin.
        QList<int> dolu_liste = liste_sayi_doldur();//listenin iÃÂ§indeki deÃÂerler.  0-1-2-3....kelime_sayisi
        dolu_liste.removeAt(soru_index);
        QList<int> dolu_liste_karisik =liste_karistir(dolu_liste);
        QString sahte_cevap_1 =soruyu_al( dolu_liste_karisik.at(1));
        QString sahte_cevap_2 =soruyu_al( dolu_liste_karisik.at(2));
        QString sahte_cevap_3 =soruyu_al( dolu_liste_karisik.at(3));
        QString sahte_cevap_4 =soruyu_al( dolu_liste_karisik.at(4));


        QString soru =   soru_cevap_cifti_olustur( sorulacaklar_listesi_karisik.at(0) ).second   ;
        QString cevap =  soru_cevap_cifti_olustur( sorulacaklar_listesi_karisik.at(0) ).first  ;
// cevap=qcevap;//cevap xml clasÃÂ±nÃÂ±n ÃÂ¼yesi

        QList<int> cevap_siklari=liste_sayi_doldur(5);// listenin iÃÂ§indeki deÃÂerler   1-2-3-4-5
        QList<int> cevap_siklari_karisik =liste_karistir(cevap_siklari);
        QList<QString> soru_listesi;
        soru_listesi.insert(0 , soru );//burasÃÂ± sabit soru buraya gelir.
        soru_listesi.insert(cevap_siklari_karisik.at(0) ,  sahte_cevap_1);// a ÃÂÃÂ±kkÃÂ±
        soru_listesi.insert(cevap_siklari_karisik.at(1)  , cevap);        // b ÃÂÃÂ±kkÃÂ±
        soru_listesi.insert(cevap_siklari_karisik.at(2)  , sahte_cevap_2);// c ÃÂÃÂ±kkÃÂ±
        soru_listesi.insert(cevap_siklari_karisik.at(3)  , sahte_cevap_3);// d ÃÂÃÂ±kkÃÂ±
        soru_listesi.insert(cevap_siklari_karisik.at(4)  , sahte_cevap_4);// e ÃÂÃÂ±kkÃÂ±
        return soru_listesi;

}
int wordMemorize::rastgele_sayi(int ilk , int son )
{
        int sayi;
        QTime midnight(0, 0, 0);
        srand(midnight.secsTo(QTime::currentTime()));
        sayi=rand() % (son-ilk+ 1 ) + ilk ;
        return sayi;
}

QList<int> wordMemorize::liste_sayi_doldur()
{
        int kelime_sayisi;
        kelime_sayisi=kackelimevar();
        QList<int> sayi_liste;
        for (int i=0;i< (kelime_sayisi ) ; i++)
                sayi_liste.append(i);
        return sayi_liste;
}
QList<int> wordMemorize::liste_sayi_doldur(int boyut)
{

        QList<int> sayi_liste;

        for (int i=1;i<= boyut ; i++)
                sayi_liste.append(i);
        return sayi_liste;
}
QList<int> wordMemorize::liste_karistir(QList<int> liste)
{
        int gecici;
        QList<int> karisik_liste;
        while (!liste.isEmpty()) {
                gecici=rastgele_sayi(0,liste.size()-1);
                karisik_liste.append(liste.takeAt(gecici));

        };
        return karisik_liste;
}

QList<int> wordMemorize::liste_fark_al(QList<int> liste1 , QList<int> liste2)
{

        QSet<int> kucuk_kume = QSet<int>::fromList(liste1);
        QSet<int> buyuk_kume = QSet<int>::fromList(liste2);
        QSet<int> yeni_kume  = buyuk_kume.subtract(kucuk_kume);
        QList<int> yeni_liste = yeni_kume.toList();
        return yeni_liste;

}

void wordMemorize::tam_soru_listesi_set()
{
        tam_soru_listesi = liste_sayi_doldur();
}

QStringList wordMemorize::tum_kelimeler_soru()
{
        QStringList lst;

        for (int i=0;i<kackelimevar();i++)
                lst.append(soruyu_al(i));
        return lst;


}
QStringList wordMemorize::tum_kelimeler_cevap()
{
        QStringList lst;

        for (int i=0;i<kackelimevar();i++)
                lst.append(cevabi_al(i));
        return lst;


}
int wordMemorize::getTermIndex()
{
        return soru_index;
}
bool wordMemorize::setDataFileName()
{
	QString homePath=QDir::homePath ();
// 	#ifdef Q_WS_X11
//         QString dosyaYolu = QFileDialog::getOpenFileName(this,trUtf8("Veritabanını Seçiniz"),"/usr/share/imtihan","Imtihan(*.imt)");
// 	#else ifdef Q_WS_WIN
        QString dosyaYolu = QFileDialog::getOpenFileName(this,trUtf8("Veritabanını Seçiniz"),"/usr/share/imtihan","Imtihan(*.imt)");
// 	#endif
        settings.setValue("SourcePath",dosyaYolu);
        setSource(dosyaYolu);
        setElementNames();
        return true;
}
