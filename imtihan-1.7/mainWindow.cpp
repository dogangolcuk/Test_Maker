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

#include "mainWindow.h"
#include "formYanlislar.h"
#include "formVeriAktar.h"
mainWindow::mainWindow()
{



        setupUi(this);
        oturum=0;
        kelime_ezber = new wordMemorize();
        bolumList=kelime_ezber->getElementNames();
        kullanici = new formUserConf(this);
        cbKullaniciAd->insertItems ( 0, kullanici->getUserList());
        cbSorulacakBolum->insertItems ( 0, bolumList );
        gizle=true;
        connect(tBGizle,SIGNAL(clicked()),this,SLOT(gizle_goster()));
// connect(tBChangeState,SIGNAL(clicked()),this,SLOT(changeState()));
        connect(listWidget,SIGNAL(itemClicked ( QListWidgetItem *  )),this,SLOT(ltikla ( QListWidgetItem *  )));
        connect(lineEdit,SIGNAL(textChanged (const QString & )),this,SLOT(ara(const QString & )));
        connect(actionKartmodu,SIGNAL(activated()),this,SLOT(FormKartShow()));
        connect(pBKartMod,SIGNAL(clicked()),this,SLOT(FormKartShow()));
        connect(actionVeri_Dosyas_Se,SIGNAL(activated()),this,SLOT(DataFileName()));
        connect(actionYanlilariGoster,SIGNAL(activated()),this,SLOT(YanlislariYaz()));
        connect(actionHakkinda,SIGNAL(activated()),this,SLOT(hakkinda()));
        connect(tbAyarlarKaydet,SIGNAL(clicked()),this,SLOT(yeni_oturum_ac()));
        connect(actionKullanici,SIGNAL(activated()),this,SLOT(UserConfForm()));
        connect(pbDigerSoru ,SIGNAL(clicked()),  this,SLOT(digerSoru()));
        connect(rdbCevap_1 ,SIGNAL(clicked()), this ,SLOT(kontrolEt()));
        connect(rdbCevap_2 ,SIGNAL(clicked()), this ,SLOT(kontrolEt()));
        connect(rdbCevap_3 ,SIGNAL(clicked()), this ,SLOT(kontrolEt()));
        connect(rdbCevap_4 ,SIGNAL(clicked()), this ,SLOT(kontrolEt()));
        connect(rdbCevap_5 ,SIGNAL(clicked()), this ,SLOT(kontrolEt()));
        connect(kullanici,SIGNAL(userAdded()),this,SLOT(cbUserRefresh()));
        connect(kullanici,SIGNAL(userDeleted()),this,SLOT(cbUserRefresh()));
        connect(kullanici,SIGNAL(userGeriYukleClick()),this,SLOT(UserGeriYukle()));
        connect(kullanici,SIGNAL(userBackupClick(QString)),this,SLOT(UserBackup(QString)));
        connect(action_e_Kelime_Aktar,SIGNAL(activated()),this,SLOT(ice_KelimeAktar()));

}
void mainWindow::hakkinda()
{
        formAbout *about = new formAbout(this);
        about->show();
}

void mainWindow::YanlislariYaz()
{
        if (oturum) {
                formYanlislar *f = new formYanlislar(this);
                f->show();
                QStringList tmp = yanlislariGoster();
                QStringList tmpHepsi = yanlislariGosterHepsi();
                f->ekle(tmp,tmpHepsi);
        } else {
                QMessageBox::warning(this,trUtf8("Uyarı"), trUtf8("Yeni bir oturum açmalısınız."));
        }
}
void mainWindow::UserConfForm()
{

        kullanici->show();

}
void mainWindow::ice_KelimeAktar()
{
        formVeriAktar *v = new formVeriAktar(this);
        v->show();

}
void mainWindow::DataFileName()
{
        kelime_ezber->setDataFileName();
//  kelime_ezber->setElementNames();
        bolumList=kelime_ezber->getElementNames();
        cbSorulacakBolum->clear();
        cbSorulacakBolum->insertItems ( 0, bolumList );
}
void mainWindow::lblTazele()
{
        QLocale lokal(QLocale::Turkish , QLocale::Turkey);
        lblTamSayi->setText(lokal.toString(kelime_ezber->kackelimevar()));
        lblCevaplanSayisi->setText(lokal.toString(currentUser->get_allAnsweredListSize()));
        lblDogruSayisi->setText(lokal.toString(currentUser->get_trueAnsweredListSize()));
        lblYanlisSayisi->setText(lokal.toString(currentUser->get_falseAnsweredListSize()));

}
bool mainWindow::qSoruKontrolEt(QString str)
{

        if (cbTrtoIng->isChecked()) {

                if (QString::compare(kelime_ezber->soruyu_al(kelime_ezber->getTermIndex()), str) == 0) { //doÄru ise
                        currentUser->setCurrentState(kelime_ezber->getTermIndex() , 1);//setCurrentState(soru_index , 1);
                        return 1;
                } else {
                        currentUser->setCurrentState(kelime_ezber->getTermIndex() , 0);
                        return 0;
                }
        } else {
                if (QString::compare(kelime_ezber->cevabi_al(kelime_ezber->getTermIndex()), str) == 0) { //doÄru ise
                        currentUser->setCurrentState(kelime_ezber->getTermIndex() , 1);//setCurrentState(soru_index , 1);
                        return 1;
                } else {
                        currentUser->setCurrentState(kelime_ezber->getTermIndex() , 0);
                        return 0;
                }
//                break;

        }
}

void mainWindow::kontrolEt( )
{
        if (oturum) {
                if (qSoruKontrolEt(qobject_cast<QRadioButton *>(sender())->text())) {
                        lblDogruYanlis->setText(trUtf8("DOĞRU"));
//    lblDogruYanlis->text()
                        lblDogruYanlis->setStyleSheet("color: green ;"" font-size: 20px;"  );
                        qobject_cast<QRadioButton *>(sender())->setStyleSheet("color: green ;"  );
                        currentUser->update_trueAnsweredList(kelime_ezber->getTermIndex());

                        rdbKilitle(rdbCevap_1);
                } else {
                        lblDogruYanlis->setText(trUtf8("YANLIŞ"));
                        lblDogruYanlis->setStyleSheet("color: red ;"" font-size: 20px;"  );
                        qobject_cast<QRadioButton *>(sender())->setStyleSheet("color: red ;"  );
//    lblDogruYanlis->
                        currentUser->update_falseAnsweredList(kelime_ezber->getTermIndex());
                        QString dogrusu = kelime_ezber->soruyu_al(kelime_ezber->getTermIndex()) + " = " + kelime_ezber->cevabi_al(kelime_ezber->getTermIndex());
                        lblDogrusu->setText(dogrusu);
                        lblDogrusu->setStyleSheet("color: magenta ;"" font-weight: bold;"  );
                        rdbKilitle(rdbCevap_1);
                }

// kelime_ezber->cevaplanan_sorular_set(kelime_ezber->soru_index);
                currentUser->update_allAnsweredList(kelime_ezber->getTermIndex());


                lblTazele();
        } else {
                QMessageBox::warning(this,trUtf8("Uyarı"), trUtf8("Yeni bir oturum açmalısınız."));
        }
}
void mainWindow::rdbAc()
{
        rdbCevap_1->setEnabled(1);
        rdbCevap_2->setEnabled(1);
        rdbCevap_3->setEnabled(1);
        rdbCevap_4->setEnabled(1);
        rdbCevap_5->setEnabled(1);

        rdbCevap_1->setAutoExclusive(0);
        rdbCevap_2->setAutoExclusive(0);
        rdbCevap_3->setAutoExclusive(0);
        rdbCevap_4->setAutoExclusive(0);
        rdbCevap_5->setAutoExclusive(0);

        rdbCevap_1-> setChecked ( 0);
        rdbCevap_2-> setChecked ( 0 );
        rdbCevap_3-> setChecked ( 0 );
        rdbCevap_4-> setChecked ( 0 );
        rdbCevap_5-> setChecked ( 0 );

        rdbCevap_1->setStyleSheet("color: black ;"  );
        rdbCevap_2->setStyleSheet("color: black ;"  );
        rdbCevap_3->setStyleSheet("color: black ;"  );
        rdbCevap_4->setStyleSheet("color: black ;"  );
        rdbCevap_5->setStyleSheet("color: black ;"  );
        lblDogrusu->setStyleSheet("color: black ;""font-weight: bold;"   );
}
void mainWindow::rdbKilitle(QObject *btn)
{
        if (qobject_cast<QRadioButton *>(btn)->isEnabled()) {
                rdbCevap_1->setEnabled(false);
                rdbCevap_2->setEnabled(false);
                rdbCevap_3->setEnabled(false);
                rdbCevap_4->setEnabled(false);
                rdbCevap_5->setEnabled(false);
        } else if (!qobject_cast<QRadioButton *>(btn)->isEnabled()) {
                rdbCevap_1->setEnabled(1);
                rdbCevap_2->setEnabled(1);
                rdbCevap_3->setEnabled(1);
                rdbCevap_4->setEnabled(1);
                rdbCevap_5->setEnabled(1);
        }
}
void mainWindow::qSorusor()
{
        soru_cevap = kelime_ezber->soru_listesi_olustur(currentUser->get_allAnsweredList());
        int kelime_index = kelime_ezber->getTermIndex();
        ornek_cumle = kelime_ezber->ornek_al(kelime_index);
        lbOrnekCumle->setText(ornek_cumle);
}
void mainWindow::qSorusorTers()
{
        soru_cevap = kelime_ezber->soru_listesi_olustur_ters(currentUser->get_allAnsweredList());

}
void mainWindow::digerSoru()
{

        if (oturum) {
                if (kelime_ezber->kackelimevar()>currentUser->get_allAnsweredListSize()) {
                        if (cbTrtoIng->isChecked()) {
                                qSorusorTers();
                        } else {
                                qSorusor();
                        }
                        lblDogrusu->setText(soru_cevap.at(0));


                        rdbCevap_1->setText(soru_cevap.at(1));
                        rdbCevap_2->setText(soru_cevap.at(2));
                        rdbCevap_3->setText(soru_cevap.at(3));
                        rdbCevap_4->setText(soru_cevap.at(4));
                        rdbCevap_5->setText(soru_cevap.at(5));

                        lblTazele();
                        lblDogruYanlis->setText(QString::fromUtf8(""));
// lbOrnekCumle->setText("");
                        rdbAc();
                        gizle=true;
                        gizle_goster();
                } else {
                        QMessageBox::warning(this,trUtf8("Uyarı"), trUtf8("Bu bölümdeki kelimeler bitti."));
                }

        } else {
                QMessageBox::warning(this,trUtf8("Uyarı"), trUtf8("Yeni bir oturum açmalısınız."));
        }
}



QStringList mainWindow::yanlislariGoster()
{
        QStringList liste ;
        QString bolum =cbSorulacakBolum->currentText();
        QString sc= trUtf8("\nBu kelime listesi Imtihan programı tarafından oluşturuldu.\nBölüm ismi =")+ bolum+"\n";
        liste.append(sc);
        for ( int i=0;i<currentUser->get_falseAnsweredListSize();i++) {
                QString soru =kelime_ezber->soruyu_al(currentUser->get_falseAnsweredList().at(i));
                QString cevap=kelime_ezber->cevabi_al(currentUser->get_falseAnsweredList().at(i));
QString sc=  "<tr width=50%><td width=25%>"+soru +"</td><td>=</td><td width=25%>"+ cevap +"</td></tr>";
// 		QString sc=soru+"    =      "+cevap;
                liste.append(sc);
        }
        return liste;


}
QStringList mainWindow::yanlislariGosterHepsi()
{
        QStringList liste ;
        QString bolum =cbSorulacakBolum->currentText();
        QString sc= trUtf8("\nBu kelime listesi Imtihan programı tarafından oluşturuldu.\nBölüm ismi =")+ bolum+"\n";
        liste.append(sc);
        for ( int i=0;i<currentUser->get_allAnsweredListSize();i++) {
                QString soru =kelime_ezber->soruyu_al(currentUser->get_allAnsweredList().at(i));
                QString cevap=kelime_ezber->cevabi_al(currentUser->get_allAnsweredList().at(i));
QString sc=  "<tr><td width=50%>"+soru +"</td><td>=</td><td width=50%>"+ cevap +"</td></tr>";
//                 QString sc=  soru +"    =    "+ cevap;
                liste.append(sc);
        }
        return liste;


}



bool mainWindow::yeni_oturum_ac()
{
        if (oturum)
                delete currentUser;
        QString kullanici =cbKullaniciAd->currentText();
        QString bolum =cbSorulacakBolum->currentText();
//        kelime_ezber->setCurrentElement(bolum);
        kelime_ezber = new wordMemorize( bolum);
        currentUser=   new user(kullanici,bolum);
        if (!currentUser->checkFile(currentUser->getSharePath()+kullanici)) {
                currentUser->makeUserFile();
                currentUser=   new user(kullanici,bolum);
        }
        if (cBArama->isChecked())
                kelimeleri_str_liste_al();

        statusBar()->showMessage(QString::fromUtf8("Veritabanı =") +kelime_ezber->getSourcePath());
        oturum=1;
        digerSoru();
        return 1;
}
void mainWindow::kelimeleri_str_liste_al() //sadece sorulacak bÃ¶lÃ¼mdekileri alÄ±yor.
{
// QStringList lst=kelime_ezber->tum_kelimeler_soru();
        lsts=kelime_ezber->tum_kelimeler_soru();
        lstc=kelime_ezber->tum_kelimeler_cevap();
// listWidget->insertItems(0,lsts);
}
void mainWindow::ara(const QString & text)
{
        if (oturum and cBArama->isChecked()) {
//Neyseki az kelime var.:)
                listWidget->clear();
                listWidget_2->clear();
                lst_filtered.clear();
                lst_filtered_2.clear();

                QStringList::const_iterator i;
                for (i = lsts.constBegin(); i != lsts.constEnd(); ++i) {
                        if ( (*i).startsWith(text)) {

                                lst_filtered_2.append(lstc.at(lsts.indexOf(*i)));
                                lst_filtered.append((*i));
                        }
                }
                if (!lst_filtered.empty()) {
                        listWidget->insertItems(0,lst_filtered);
                        listWidget->setCurrentRow(0);
                        listWidget_2->insertItem(0,lst_filtered_2[0]);
                }
        }//end if(oturum)
        else {
                QMessageBox::warning(this,trUtf8("Uyarı"), QString::fromUtf8("Yeni bir oturum açmalısınız."));
        }
}
void mainWindow::ltikla ( QListWidgetItem * item  )
{
        listWidget_2->clear();
// lineEdit->setText(item->text() );
        listWidget_2->insertItem(0,lst_filtered_2[listWidget->row(item)]);
}
void mainWindow::closeEvent(QCloseEvent *event)
{
        if (oturum) {
//             delete currentUser;
                if (!currentUser->maybeSave())
                        event->ignore();
                else event->accept();
        } else  {
                event->accept();
//             event->ignore();
        }
}

void mainWindow::UserBackup(QString value)
{
        QFileDialog dialog;
        dialog.setFileMode(QFileDialog::DirectoryOnly);
        QString s = dialog.getExistingDirectory(
                            this,
                            trUtf8("Yedeklenecek Dizin "),
                            QDir::homePath(),
                            QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
        tmpop = new xmlop();
        QFile::copy( tmpop->getSharePath() +"/" + value , s+"/" +value);
        delete tmpop;
}
void mainWindow::UserGeriYukle()
{
        QFileDialog dialog;
        dialog.setFileMode ( QFileDialog::DirectoryOnly );
        QString s = dialog.getOpenFileName (
                            this,
                            trUtf8 ( "Geri Yüklenecek Dosya " ),
                            QDir::homePath() );
        QFileInfo fi(s);
        QString dosyaAd = fi.fileName ();
// 	qDebug() << s;

        tmpop = new xmlop();
        if (QFile::exists(tmpop->getSharePath()+"/"+dosyaAd)) {
                QFile::remove ( tmpop->getSharePath()+"/"+dosyaAd );
        }
        if ( QFile::copy ( s,tmpop->getSharePath()+"/"+dosyaAd ) ) {
                QMessageBox::information ( this, trUtf8 ( "Dosya Geri Yüklendi." ),
                                           trUtf8 ( "\nDosya Başarıyla Geri Yüklendi.. " ),
                                           QMessageBox::Close );
                QStringList tmp=kullanici->getUserList();
                tmp <<dosyaAd;
                kullanici->setUserList(tmp);
                kullanici->lwUserList->addItem(dosyaAd);
                cbUserRefresh();
        } else
                QMessageBox::information ( this, trUtf8 ( "Dosya Geri Yüklenemedi." ),
                                           trUtf8 ( "\nDosya Geri Yüklenirken Hata Oluştu. " ),
                                           QMessageBox::Close );

}
void mainWindow::cbUserRefresh()
{
        cbKullaniciAd->clear();
        cbKullaniciAd->insertItems ( 0, kullanici->getUserList());
}



void mainWindow::FormKartShow()
{
        if (oturum) {
                formKart *k = new formKart(0);
                k->setKelimeler(kelime_ezber);
                QList<int> tmp = kelime_ezber->liste_sayi_doldur();
                if (rByanlislar->isChecked()) {
                        tmp = kelime_ezber->liste_karistir(currentUser->get_falseAnsweredList());
                } else   {
                        tmp = kelime_ezber->liste_karistir(tmp);
                }
                k->setQuestionList(tmp);
                k->show();
                k->digerSoru();
        } else {
                QMessageBox::warning(this,trUtf8("Uyarı"), trUtf8("Yeni bir oturum açmalısınız."));
        }
}
void mainWindow::changeState()
{
        /*
        // currentUser->get_trueAnsweredList().removeLast();
        QDomElement data_root = currentUser->get_tmpSource().firstChildElement();
        QDomElement root = data_root.firstChildElement(currentUser->getSourcePath("_"));
        QDomElement  elemen = root.firstChildElement(currentUser->currentElement.tagName());
        elemen.lastChildElement("soru").setAttribute("durum" ,0);
        */
}

// void mainWindow::ziple()
// {
//         zipData *dene = new zipData();
// 
// }
void mainWindow::gizle_goster()
{
        if (!cBgizlegoster->isChecked() ) {
                if (gizle) {
                        rdbCevap_1->setStyleSheet("color: yellow ;""background-color: yellow;"  );
                        rdbCevap_2->setStyleSheet("color: yellow ;""background-color: yellow;" );
                        rdbCevap_3->setStyleSheet("color: yellow ;""background-color: yellow;" );
                        rdbCevap_4->setStyleSheet("color: yellow ;""background-color: yellow;" );
                        rdbCevap_5->setStyleSheet("color: yellow ;""background-color: yellow;" );
                        gizle=false;
                } else {
                        rdbCevap_1->setStyleSheet("color: black ;" );
                        rdbCevap_2->setStyleSheet("color: black ;" );
                        rdbCevap_3->setStyleSheet("color: black ;" );
                        rdbCevap_4->setStyleSheet("color: black ;" );
                        rdbCevap_5->setStyleSheet("color: black ;" );
                        gizle=true;
                }

        }

}
