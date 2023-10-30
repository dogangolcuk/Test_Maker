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

#include "ui_f_user.h"
#include<QSettings>
#include<QFile>
#include<QDir>
class formUserConf:public QDialog ,public Ui::f_user
{
        Q_OBJECT

public:
        formUserConf(QWidget *parent):QDialog(parent) {
                setupUi(this);
                lwMake();
                connect(tBAdd,SIGNAL(clicked()),this,SLOT(userAdd()));
                connect(tBDel,SIGNAL(clicked()),this,SLOT(userDelete()));
                connect(tbBackup,SIGNAL(clicked()),this,SLOT(userBackup()));
                connect(tbGeriYukle,SIGNAL(clicked()),this,SLOT(userGeriYukle()));
        }
public slots:
        QStringList getUserList() {

                QVariant vtmp =users.value("UserStrList");

                return vtmp.toStringList();

        }
        void setUserList(QStringList usl) {

                users.setValue("UserStrList",usl);

        }
        void lwMake() {
                lwUserList->insertItems(0,getUserList());

        }
        void userAdd() {
                QString str=lEUser->text();
                if (str.size()<=0)
                        return;
                lwUserList->addItem(lEUser->text());
                QStringList tmp=getUserList();
                tmp <<lEUser->text();
                setUserList(tmp);
                emit userAdded();

        }
        void userDelete() {
                QListWidgetItem *currrent = lwUserList->currentItem();
                QString userName = currrent->text();
                if (!userName.isNull() )
                        if (!QFile::remove(QDir::homePath() + "/.imtihan/" + userName ))
                                qDebug("işlem başarısız.");
                QStringList tmp=getUserList();
                tmp.removeAt(lwUserList->currentRow());
                setUserList(tmp);
                lwUserList->clear();
                lwMake();

                emit userDeleted();

        }
        void userBackup() {
                QListWidgetItem *currrent = lwUserList->currentItem();
                QString currentText = currrent->text();
                emit userBackupClick(currentText);


        }
        void userGeriYukle() {

                emit userGeriYukleClick();


        }
signals:
        void userAdded( );
        void userDeleted( );
        void userBackupClick(QString value );
        void userGeriYukleClick();
private:
        QSettings users;


};
