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

#include "ui_f_veriaktar.h"
#include "wordSave.h"
#include <QFileDialog>
class formVeriAktar:public QDialog , public Ui::F_VeriAktar
{
        Q_OBJECT

public:
        wordSave *aktarma;
        formVeriAktar(QWidget *parent):QDialog(parent) {
                setupUi(this);
                aktarma=new wordSave();
                QObject::connect(pBAktar, SIGNAL(clicked()), this, SLOT(aktar_catch()));
                QObject::connect(tBHedefDosya, SIGNAL(clicked()), this, SLOT(hedefDosyaSec()));
                QObject::connect(tBKaynakDosya, SIGNAL(clicked()), this, SLOT(kaynakDosyaSec()));

        }


public slots:

        bool aktar() {
                QString hedefDosya=leHedefDosya->text();

                QString kaynakDosya=leKaynakDosya->text();
                QString bolumIsmi=leYeniBolum->text();
                if (hedefDosya.isEmpty() or kaynakDosya.isEmpty() or bolumIsmi.isEmpty() ) {
//                         qDebug("Boş alan bırakmayınız.");
                        QMessageBox::critical(this,trUtf8("Hata"),trUtf8("Boş alan bırakmayınız."));
                        return false;
                } else {
                        if (aktarma->checkFile(kaynakDosya)) {
                                if (aktarma->checkFile(hedefDosya)) {
                                        aktarma->setSource(hedefDosya);
                                } else {
                                        QDomDocument doc("IMTIHAN_USER_DATA");
                                        QDomElement root = doc.createElement("DATAROOT");
                                        doc.appendChild(root);
                                        aktarma->writeSourceTofile(doc ,hedefDosya);
                                        aktarma->setSource(hedefDosya);
                                }

                                aktarma->yeni_bolum_olustur(leYeniBolum->text());
                                aktarma->setCurrentElement(bolumIsmi);
                                aktarma->setImportFile(kaynakDosya);
                                QDomDocument tmpDoc=aktarma->makeImportedXml(aktarma->getSource());
                                aktarma->writeSourceTofile(tmpDoc ,hedefDosya);
                        } else {
//                                 qDebug("BÃ¶yle bir kaynak dosya yok. ");
                                QMessageBox::critical(this,trUtf8("Hata"),trUtf8("Böyle bir kaynak dosya yok."));
                                return false;
                        }
                }

                return true;
        }
        void aktar_catch() {
                if (aktar())
                        QMessageBox::information(this,trUtf8("Eklendi"),trUtf8("işlem başarıyla gerçekleşti"));

        }
        QString hedefDosyaSec() {
                QString dosyaYolu = QFileDialog::getSaveFileName(this,trUtf8("Veritabanını Seçiniz/Oluşturunuz."),"/usr/share/imtihan" ,"Imtihan(*.imt)");
                if (QFileInfo(dosyaYolu).suffix() != "imt") {
                        dosyaYolu += ".imt";
                }
                leHedefDosya->setText(dosyaYolu);
                return dosyaYolu;

        }

        QString kaynakDosyaSec() {
                QString dosyaYolu = QFileDialog::getOpenFileName(this,trUtf8("Kaynak Dosya Seç"),"/usr/share/imtihan");
                leKaynakDosya->setText(dosyaYolu);
                return dosyaYolu;
        }
};

