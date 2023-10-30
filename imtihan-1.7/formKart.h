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

#include "ui_f_kart.h"
#include "wordMemorize.h"
class formKart:public QWidget ,public Ui::Form
{
        Q_OBJECT

public:
        formKart(QWidget *parent):QWidget(parent) {
                setupUi(this);
                sayac =-1;
                connect(digerKart,SIGNAL(clicked()),this,SLOT(digerSoru()));
                connect(btCevir,SIGNAL(clicked()),this,SLOT(cevir()));
                connect(pBOnceki,SIGNAL(clicked()),this,SLOT(oncekiSoru()));
        }
public slots:
        QList<int> setQuestionList(QList<int> sorulacaklar) {
                QuestionList = sorulacaklar;
                return QuestionList;
        }
        void setFront(int i) {
                lbKart->setText(kelimeler->soruyu_al(QuestionList[i]));
                lbKart->setToolTip("ipucu = " + kelimeler->ornek_al(QuestionList[i]));
                lbKart->setStyleSheet("color: black ;"" font-size: 20px;"  );
                front = true;
                back = false;
        }
        void setBack(int i) {
                lbKart->setText(kelimeler->cevabi_al(QuestionList[i]));
                lbKart->setToolTip("ipucu = " + kelimeler->ornek_al(QuestionList[i]));
                lbKart->setStyleSheet("color: blue ;"" font-size: 20px;"  );
                back = true;
                front = false;
        }
        void cevir() {
                if (front) {
                        setBack(sayac);
                } else {
                        setFront(sayac);
                }
        }
        void digerSoru() {
                sayac++;

                if (sayac >= QuestionList.size()  )
                        sayac=0;
                setFront(sayac);
                setLabel(sayac);
        }
        void oncekiSoru() {
                sayac--;

                if (sayac<0 )
                        sayac=QuestionList.size()-1;
                setFront(sayac);
                setLabel(sayac);
        }
        void setKelimeler(wordMemorize *k) {
                kelimeler = k;
        }
        void setLabel(int i) {
                QLocale lokal(QLocale::Turkish , QLocale::Turkey);
                QString tam = lokal.toString(QuestionList.size());
                QString nerde = lokal.toString(i+1);
                label->setText(nerde +"/"+tam);
        }

private:
        int sayac;
        QList<int> QuestionList;
        wordMemorize *kelimeler;
        bool back;
        bool front;
};
