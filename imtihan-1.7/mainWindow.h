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

#include "ui_f_ezberle.h"
#include "wordMemorize.h"
#include "wordSave.h"
#include "user.h"
#include <QCloseEvent>
#include "formUserConf.h"
#include "formKart.h"
#include "formAbout.h"
// #include "zipData.h"
class mainWindow : public QMainWindow , Ui::MainWindow
{
        Q_OBJECT
public:
        mainWindow();
        wordMemorize *kelime_ezber;
        user *currentUser;
        formUserConf *kullanici;
        formKart *Kart;
        xmlop *tmpop;
        bool oturum;
        bool gizle;
        QList<QString> soru_cevap;
        QStringList lsts;
        QStringList lstc;
        QStringList lst_filtered;
        QStringList  lst_filtered_2;
        QStringList  bolumList;
        QString ornek_cumle;
protected:
        void closeEvent(QCloseEvent *event);
public slots:
        void hakkinda();
        void YanlislariYaz();
        void UserConfForm();
        void ice_KelimeAktar();
        void DataFileName();
        void digerSoru();
        void kontrolEt();
        void lblTazele();
        void rdbKilitle(QObject *btn);
        void rdbAc();
        bool yeni_oturum_ac();
        void kelimeleri_str_liste_al();
        void ara(const QString & text);
        void ltikla ( QListWidgetItem * item  );
        void qSorusor();
        void qSorusorTers();
        bool qSoruKontrolEt(QString str);
        void cbUserRefresh();
        void FormKartShow();
//         void ziple();
        void changeState();
        void UserBackup(QString value);
        QStringList yanlislariGoster();
        QStringList yanlislariGosterHepsi();
        void gizle_goster();
        void UserGeriYukle();
};
