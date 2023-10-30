/********************************************************************************
** Form generated from reading UI file 'f_veriaktar.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F_VERIAKTAR_H
#define UI_F_VERIAKTAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_F_VeriAktar
{
public:
    QGridLayout *gridLayout;
    QPushButton *pBAktar;
    QToolButton *tBHedefDosya;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *leYeniBolum;
    QLineEdit *leKaynakDosya;
    QToolButton *tBKaynakDosya;
    QLabel *label;
    QLineEdit *leHedefDosya;
    QTextEdit *textEdit;

    void setupUi(QDialog *F_VeriAktar)
    {
        if (F_VeriAktar->objectName().isEmpty())
            F_VeriAktar->setObjectName(QString::fromUtf8("F_VeriAktar"));
        F_VeriAktar->resize(428, 307);
        const QIcon icon = QIcon(QString::fromUtf8("../../../../../../usr/kde/3.5/share/icons/crystalsvg/32x32/actions/svn_branch.png"));
        F_VeriAktar->setWindowIcon(icon);
        gridLayout = new QGridLayout(F_VeriAktar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        pBAktar = new QPushButton(F_VeriAktar);
        pBAktar->setObjectName(QString::fromUtf8("pBAktar"));

        gridLayout->addWidget(pBAktar, 3, 0, 1, 3);

        tBHedefDosya = new QToolButton(F_VeriAktar);
        tBHedefDosya->setObjectName(QString::fromUtf8("tBHedefDosya"));

        gridLayout->addWidget(tBHedefDosya, 0, 2, 1, 1);

        label_3 = new QLabel(F_VeriAktar);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(F_VeriAktar);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leYeniBolum = new QLineEdit(F_VeriAktar);
        leYeniBolum->setObjectName(QString::fromUtf8("leYeniBolum"));

        gridLayout->addWidget(leYeniBolum, 2, 1, 1, 1);

        leKaynakDosya = new QLineEdit(F_VeriAktar);
        leKaynakDosya->setObjectName(QString::fromUtf8("leKaynakDosya"));

        gridLayout->addWidget(leKaynakDosya, 1, 1, 1, 1);

        tBKaynakDosya = new QToolButton(F_VeriAktar);
        tBKaynakDosya->setObjectName(QString::fromUtf8("tBKaynakDosya"));

        gridLayout->addWidget(tBKaynakDosya, 1, 2, 1, 1);

        label = new QLabel(F_VeriAktar);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leHedefDosya = new QLineEdit(F_VeriAktar);
        leHedefDosya->setObjectName(QString::fromUtf8("leHedefDosya"));

        gridLayout->addWidget(leHedefDosya, 0, 1, 1, 1);

        textEdit = new QTextEdit(F_VeriAktar);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 4, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(leKaynakDosya);
        label->setBuddy(leHedefDosya);
#endif // QT_NO_SHORTCUT

        retranslateUi(F_VeriAktar);

        QMetaObject::connectSlotsByName(F_VeriAktar);
    } // setupUi

    void retranslateUi(QDialog *F_VeriAktar)
    {
        F_VeriAktar->setWindowTitle(QApplication::translate("F_VeriAktar", "Veri Aktarma", 0, QApplication::UnicodeUTF8));
        pBAktar->setText(QApplication::translate("F_VeriAktar", "Ak&tar", 0, QApplication::UnicodeUTF8));
        tBHedefDosya->setText(QApplication::translate("F_VeriAktar", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("F_VeriAktar", "kelimelerin hangi bolume eklenece\304\237i.(\303\266rne\304\237in kpds b\303\266l\303\274m\303\274)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("F_VeriAktar", "Hangi B\303\266l\303\274m :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("F_VeriAktar", "Kelimelerin i\303\247inde bulundu\304\237u veri dosyas\304\261", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("F_VeriAktar", "Kaynak Dosya Ad\304\261:", 0, QApplication::UnicodeUTF8));
        tBKaynakDosya->setText(QApplication::translate("F_VeriAktar", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("F_VeriAktar", "Olu\305\237turulacak Veri Dosyas\304\261 Bu Olacak.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("F_VeriAktar", "Hedef Dosya Ad\304\261 :", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("F_VeriAktar", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#a52a2a;\">Hangi B\303\266l\303\274m</span><span style=\" font-size:8pt;\"> k\304\261sm\304\261na kelimelerinizin hangi b\303\266l\303\274m (kpds gibi) alt\304\261na eklenece\304\237ini yaz\304\261n.E\304\237er \303\266yle bir b\303\266l\303\274m yoksa olu\305\237acakt\304\261r.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600; text-decoration: underline; color:#ff6347;\">------------------------------------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600; color:#ff6347;\"><span style=\" font-weight:400; color:#191970;\">Hedef dosyan\304\261z yoksa (*.imt) uzant\304\261l\304\261 olarak olu\305\237acakt\304\261r.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600; text-decoration: underline; color:#ff6347;\">------------------------------------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600; color:#ff6347;\"><span style=\" text-decoration: underline;\">Kaynak dosyan\304\261z\304\261n format\304\261 \305\237\303\266yle olmal\304\261:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600; "
                        "color:#ff6347;\"><span style=\" color:#4682b4;\">kelime </span><span style=\" color:#000000;\">#</span> anlam\304\261 <span style=\" color:#000000;\">#</span> <span style=\" color:#ff0000;\">\303\266rnek</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600; color:#ff6347;\"><span style=\" color:#4682b4;\">kelime2</span> <span style=\" color:#000000;\">#</span> anlam\304\2612 <span style=\" color:#000000;\">#</span> <span style=\" color:#ff0000;\">\303\266rnek</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600; color:#ff0000;\"><span style=\" color:#4682b4;\">kelime </span><span style=\" color:#000000;\">#</span><span style=\" color:#ff6347;\"> anlam\304\261 </span><span style=\" color:#000000;\">#</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#ff0000;\"><span style=\" font-size:7pt;\"> *E\304\237er \303\266rnek c\303\274mleniz yoksa \"#\" b\304\261rakmak ko\305\237ulu ile yazmayabilirsiniz.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#000000;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#ff6347;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class F_VeriAktar: public Ui_F_VeriAktar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F_VERIAKTAR_H
