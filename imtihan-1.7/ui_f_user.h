/********************************************************************************
** Form generated from reading UI file 'f_user.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F_USER_H
#define UI_F_USER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_f_user
{
public:
    QGridLayout *gridLayout;
    QListWidget *lwUserList;
    QLabel *label;
    QLineEdit *lEUser;
    QToolButton *tBAdd;
    QToolButton *tBDel;
    QToolButton *tbBackup;
    QToolButton *tbGeriYukle;

    void setupUi(QDialog *f_user)
    {
        if (f_user->objectName().isEmpty())
            f_user->setObjectName(QString::fromUtf8("f_user"));
        f_user->resize(295, 230);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(f_user->sizePolicy().hasHeightForWidth());
        f_user->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../usr/kde/3.5/share/icons/crystalsvg/32x32/actions/edit_user.png"), QSize(), QIcon::Normal, QIcon::Off);
        f_user->setWindowIcon(icon);
        gridLayout = new QGridLayout(f_user);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lwUserList = new QListWidget(f_user);
        lwUserList->setObjectName(QString::fromUtf8("lwUserList"));

        gridLayout->addWidget(lwUserList, 0, 0, 1, 6);

        label = new QLabel(f_user);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lEUser = new QLineEdit(f_user);
        lEUser->setObjectName(QString::fromUtf8("lEUser"));

        gridLayout->addWidget(lEUser, 1, 1, 1, 1);

        tBAdd = new QToolButton(f_user);
        tBAdd->setObjectName(QString::fromUtf8("tBAdd"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ikonlar/ikonlar/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBAdd->setIcon(icon1);

        gridLayout->addWidget(tBAdd, 1, 2, 1, 1);

        tBDel = new QToolButton(f_user);
        tBDel->setObjectName(QString::fromUtf8("tBDel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ikonlar/ikonlar/button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBDel->setIcon(icon2);

        gridLayout->addWidget(tBDel, 1, 3, 1, 1);

        tbBackup = new QToolButton(f_user);
        tbBackup->setObjectName(QString::fromUtf8("tbBackup"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ikonlar/ikonlar/easymoblog.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbBackup->setIcon(icon3);

        gridLayout->addWidget(tbBackup, 1, 4, 1, 1);

        tbGeriYukle = new QToolButton(f_user);
        tbGeriYukle->setObjectName(QString::fromUtf8("tbGeriYukle"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ikonlar/ikonlar/kartmodu2.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbGeriYukle->setIcon(icon4);

        gridLayout->addWidget(tbGeriYukle, 1, 5, 1, 1);


        retranslateUi(f_user);
        QObject::connect(lwUserList, SIGNAL(currentTextChanged(QString)), lEUser, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(f_user);
    } // setupUi

    void retranslateUi(QDialog *f_user)
    {
        f_user->setWindowTitle(QApplication::translate("f_user", "Kullan\304\261c\304\261 Ekle/\303\207\304\261kar/Yedekle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lwUserList->setToolTip(QApplication::translate("f_user", "Kullan\304\261c\304\261lar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("f_user", "Kullan\304\261c\304\261", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lEUser->setToolTip(QApplication::translate("f_user", "Eklenecek kullan\304\261c\304\261 ismini giriniz.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tBAdd->setToolTip(QApplication::translate("f_user", "Ekle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tBAdd->setText(QApplication::translate("f_user", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tBDel->setToolTip(QApplication::translate("f_user", "Sil", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tBDel->setText(QApplication::translate("f_user", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbBackup->setToolTip(QApplication::translate("f_user", "Yedekle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tbBackup->setText(QApplication::translate("f_user", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbGeriYukle->setToolTip(QApplication::translate("f_user", "Geri Y\303\274kle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tbGeriYukle->setText(QApplication::translate("f_user", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class f_user: public Ui_f_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F_USER_H
