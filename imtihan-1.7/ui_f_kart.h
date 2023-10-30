/********************************************************************************
** Form generated from reading UI file 'f_kart.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F_KART_H
#define UI_F_KART_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *lbKart;
    QToolButton *toolButton;
    QToolButton *btCevir;
    QPushButton *digerKart;
    QPushButton *pBOnceki;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->setWindowModality(Qt::NonModal);
        Form->resize(400, 172);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../usr/kde/3.5/share/icons/crystalsvg/32x32/apps/abiword.png"), QSize(), QIcon::Normal, QIcon::Off);
        Form->setWindowIcon(icon);
        gridLayout = new QGridLayout(Form);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 4, 1, 1);

        lbKart = new QLabel(Form);
        lbKart->setObjectName(QString::fromUtf8("lbKart"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(20);
        lbKart->setFont(font);
        lbKart->setAutoFillBackground(true);
        lbKart->setFrameShape(QFrame::StyledPanel);
        lbKart->setFrameShadow(QFrame::Raised);
        lbKart->setAlignment(Qt::AlignCenter);
        lbKart->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lbKart, 0, 0, 1, 5);

        toolButton = new QToolButton(Form);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setCursor(QCursor(Qt::ForbiddenCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ikonlar/ikonlar/agt_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);

        gridLayout->addWidget(toolButton, 1, 3, 1, 1);

        btCevir = new QToolButton(Form);
        btCevir->setObjectName(QString::fromUtf8("btCevir"));
        btCevir->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ikonlar/ikonlar/kartmodu2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btCevir->setIcon(icon2);
        btCevir->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btCevir, 1, 2, 1, 1);

        digerKart = new QPushButton(Form);
        digerKart->setObjectName(QString::fromUtf8("digerKart"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ikonlar/ikonlar/1rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        digerKart->setIcon(icon3);

        gridLayout->addWidget(digerKart, 1, 1, 1, 1);

        pBOnceki = new QPushButton(Form);
        pBOnceki->setObjectName(QString::fromUtf8("pBOnceki"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ikonlar/ikonlar/player_rew.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBOnceki->setIcon(icon4);

        gridLayout->addWidget(pBOnceki, 1, 0, 1, 1);

        QWidget::setTabOrder(pBOnceki, digerKart);
        QWidget::setTabOrder(digerKart, btCevir);
        QWidget::setTabOrder(btCevir, toolButton);

        retranslateUi(Form);
        QObject::connect(toolButton, SIGNAL(clicked()), Form, SLOT(close()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Kelime \303\226\304\237renme Kart\304\261", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form", "../..", 0, QApplication::UnicodeUTF8));
        lbKart->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("Form", "Pencereyi Kapat", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        toolButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        toolButton->setText(QApplication::translate("Form", "...", 0, QApplication::UnicodeUTF8));
        btCevir->setText(QApplication::translate("Form", "Kart\304\261 \303\207evir", 0, QApplication::UnicodeUTF8));
        digerKart->setText(QApplication::translate("Form", "Sonraki", 0, QApplication::UnicodeUTF8));
        pBOnceki->setText(QApplication::translate("Form", "\303\226nceki", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F_KART_H
