/********************************************************************************
** Form generated from reading UI file 'f_yanlislar.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F_YANLISLAR_H
#define UI_F_YANLISLAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_F_Yanlislar
{
public:
    QGridLayout *gridLayout;
    QPushButton *PbHepsi;
    QTextEdit *textEdit;
    QToolButton *tbYazdir;

    void setupUi(QWidget *F_Yanlislar)
    {
        if (F_Yanlislar->objectName().isEmpty())
            F_Yanlislar->setObjectName(QString::fromUtf8("F_Yanlislar"));
        F_Yanlislar->resize(410, 341);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../usr/kde/3.5/share/icons/crystalsvg/32x32/actions/messagebox_critical.png"), QSize(), QIcon::Normal, QIcon::Off);
        F_Yanlislar->setWindowIcon(icon);
        gridLayout = new QGridLayout(F_Yanlislar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        PbHepsi = new QPushButton(F_Yanlislar);
        PbHepsi->setObjectName(QString::fromUtf8("PbHepsi"));

        gridLayout->addWidget(PbHepsi, 0, 0, 1, 1);

        textEdit = new QTextEdit(F_Yanlislar);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        tbYazdir = new QToolButton(F_Yanlislar);
        tbYazdir->setObjectName(QString::fromUtf8("tbYazdir"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tbYazdir->sizePolicy().hasHeightForWidth());
        tbYazdir->setSizePolicy(sizePolicy);
        tbYazdir->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ikonlar/ikonlar/agt_print.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbYazdir->setIcon(icon1);
        tbYazdir->setIconSize(QSize(36, 36));
        tbYazdir->setPopupMode(QToolButton::DelayedPopup);
        tbYazdir->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbYazdir, 2, 0, 1, 1);


        retranslateUi(F_Yanlislar);
        QObject::connect(tbYazdir, SIGNAL(clicked()), F_Yanlislar, SLOT(hide()));

        QMetaObject::connectSlotsByName(F_Yanlislar);
    } // setupUi

    void retranslateUi(QWidget *F_Yanlislar)
    {
        F_Yanlislar->setWindowTitle(QApplication::translate("F_Yanlislar", "Yap\304\261lan Yanl\304\261\305\237lar", 0, QApplication::UnicodeUTF8));
        PbHepsi->setText(QApplication::translate("F_Yanlislar", "T\303\274m Cevaplad\304\261\304\237\304\261m Sorular\304\261 G\303\266ster", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class F_Yanlislar: public Ui_F_Yanlislar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F_YANLISLAR_H
