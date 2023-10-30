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
#include <QApplication>
#include <QTranslator>
int main(int argc, char *argv[])
{
        QDir path = QDir(QDir::homePath() + "/.imtihan");
        if (!path.exists())
                path.mkpath(QDir::homePath() + "/.imtihan");


        QApplication app(argc,argv);



//         QTranslator translator;
//         translator.load(path + "eng.qm");
//         app.installTranslator(&translator);


        mainWindow *form = new mainWindow;

        form->show();

        return app.exec();

}


