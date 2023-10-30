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

#include "ui_f_yanlislar.h"
#include <QtGui/QPrinter>
#include <QtGui/QPrintDialog>
#include <QtGui/QPrintPreviewDialog>
#include <QWebView>
class formYanlislar:public QDialog , public Ui::F_Yanlislar
{
        Q_OBJECT

public:
        QStringList tmp;
        QStringList lstg;
        QWebView *web;
        bool tum;
        formYanlislar(QWidget *parent):QDialog(parent) {
                setupUi(this);
                web = new QWebView(0);

                connect(tbYazdir, SIGNAL(clicked()), this, SLOT(print()));
                connect(PbHepsi, SIGNAL(clicked()), this, SLOT(hepsi()));

        }
public slots:

        void ekle(QStringList lst,QStringList lstHepsi) {
                tmp=lstHepsi;
                lstg=lst;
                tum=true;
// 		textEdit->append("<center><table cellspacing='7' cellpadding='7' border='1' >");
		
                for ( int i=0;i<lst.size();i++) {
// textEdit->append("<tr><td>");
//                         textEdit->append("<tr><td>"+lst.at(i)+"</td></tr>");
 textEdit->append(lst.at(i));
// textEdit->append("</td></tr>");
                }
//  		textEdit->append("</table></center>");
               web->setHtml(textEdit->toHtml());
        }
        void hepsi() {
                if (tum) {
                        PbHepsi->setText("");
                        textEdit->clear();
                        for ( int i=0;i<tmp.size();i++) {
                                textEdit->append(tmp.at(i));
                        }
                        tum=false;
                        PbHepsi->setText(QObject::trUtf8("Sadece Yanlışları Göster"));

                } else {

                        textEdit->clear();
                        for ( int i=0;i<lstg.size();i++) {
                                textEdit->append(lstg.at(i));
                        }
                        tum=true;
                        PbHepsi->setText(QObject::trUtf8("Tüm Cevapladıklarımı Göster"));
                }
               web->setHtml(textEdit->toHtml());
        }
        void print() {
                QPrinter *printer = new QPrinter(QPrinter::ScreenResolution);
                printer->setPaperSize(QPrinter::A5);
                QPrintPreviewDialog *dialog = new QPrintPreviewDialog(printer,this);
              connect(dialog, SIGNAL(paintRequested(QPrinter *)),
                       web, SLOT(print(QPrinter *)));
                dialog->exec();
        }

};
