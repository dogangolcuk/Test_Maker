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

#ifndef USER_H
#define USER_H
#include "xmlop.h"
#include <QtGui/QMessageBox>
class user:public xmlop
{
        Q_OBJECT
private:
        QString userName;
        QDomDocument tmpSource;
        QList<int> allAnsweredList;
        QList<int> trueAnsweredList;
        QList<int> falseAnsweredList;
        bool userFileChanged;
public :
        ~user();
        user(const QString & uname,const QString & cE );
public slots:
        void setUserName(const QString & uname);
        bool setCurrentState(int index , int durum );
        void setAnsweredWordsList();
        bool makeUserFile();
        void update_allAnsweredList(int index);
        void update_trueAnsweredList(int index);
        void update_falseAnsweredList(int index);
        QList<int> get_falseAnsweredList();
        QList<int> get_trueAnsweredList();
        QList<int> get_allAnsweredList();
        int get_allAnsweredListSize();
        int get_trueAnsweredListSize();
        int get_falseAnsweredListSize();
        bool maybeSave();
        QDomDocument get_tmpSource();
signals:
        void allAnsweredListChanged(QList<int> newList);
};
#endif// USER_H
