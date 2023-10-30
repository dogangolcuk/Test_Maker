/********************************************************************************
** Form generated from reading UI file 'f_ezberle.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F_EZBERLE_H
#define UI_F_EZBERLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHakkinda;
    QAction *actionKapat;
    QAction *actionYanlilariGoster;
    QAction *actionKullanici;
    QAction *action_e_Kelime_Aktar;
    QAction *actionVeri_Dosyas_Se;
    QAction *actionKartmodu;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QLabel *lbOrnekCumle;
    QSplitter *splitter;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QVBoxLayout *vboxLayout;
    QToolBox *aracKutusu;
    QWidget *pOturumAc;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QComboBox *cbKullaniciAd;
    QLabel *label_2;
    QComboBox *cbSorulacakBolum;
    QCheckBox *cbTrtoIng;
    QCheckBox *cBgizlegoster;
    QPushButton *tbAyarlarKaydet;
    QWidget *page;
    QGridLayout *gridLayout2;
    QCheckBox *rByanlislar;
    QPushButton *pBKartMod;
    QWidget *pArama;
    QGridLayout *gridLayout3;
    QListWidget *listWidget_2;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QCheckBox *cBArama;
    QFrame *frame_2;
    QGridLayout *gridLayout4;
    QGridLayout *gridLayout5;
    QVBoxLayout *vboxLayout2;
    QLabel *lblDogruYanlis;
    QLabel *lblDogrusu;
    QVBoxLayout *vboxLayout3;
    QLabel *lblA;
    QLabel *lblB;
    QLabel *lblC;
    QLabel *lblD;
    QLabel *lblE;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout;
    QToolButton *tBGizle;
    QPushButton *pbDigerSoru;
    QHBoxLayout *hboxLayout1;
    QLabel *lblCevaplanSayisi;
    QLabel *label_3;
    QLabel *lblTamSayi;
    QFrame *line;
    QLabel *lblDogruSayisi;
    QFrame *line_2;
    QLabel *lblYanlisSayisi;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout5;
    QRadioButton *rdbCevap_1;
    QSpacerItem *verticalSpacer;
    QRadioButton *rdbCevap_2;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *rdbCevap_3;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *rdbCevap_4;
    QSpacerItem *verticalSpacer_4;
    QRadioButton *rdbCevap_5;
    QSpacerItem *verticalSpacer_5;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(453, 390);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../usr/kde/3.5/share/icons/crystalsvg/48x48/apps/abiword.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setDockNestingEnabled(false);
        actionHakkinda = new QAction(MainWindow);
        actionHakkinda->setObjectName(QString::fromUtf8("actionHakkinda"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ikonlar/ikonlar/agt_support.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHakkinda->setIcon(icon1);
        actionKapat = new QAction(MainWindow);
        actionKapat->setObjectName(QString::fromUtf8("actionKapat"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ikonlar/ikonlar/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKapat->setIcon(icon2);
        actionYanlilariGoster = new QAction(MainWindow);
        actionYanlilariGoster->setObjectName(QString::fromUtf8("actionYanlilariGoster"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ikonlar/ikonlar/filequickprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionYanlilariGoster->setIcon(icon3);
        actionKullanici = new QAction(MainWindow);
        actionKullanici->setObjectName(QString::fromUtf8("actionKullanici"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ikonlar/ikonlar/users.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKullanici->setIcon(icon4);
        action_e_Kelime_Aktar = new QAction(MainWindow);
        action_e_Kelime_Aktar->setObjectName(QString::fromUtf8("action_e_Kelime_Aktar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ikonlar/ikonlar/iceaktar.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_e_Kelime_Aktar->setIcon(icon5);
        actionVeri_Dosyas_Se = new QAction(MainWindow);
        actionVeri_Dosyas_Se->setObjectName(QString::fromUtf8("actionVeri_Dosyas_Se"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ikonlar/ikonlar/folder_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVeri_Dosyas_Se->setIcon(icon6);
        actionKartmodu = new QAction(MainWindow);
        actionKartmodu->setObjectName(QString::fromUtf8("actionKartmodu"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/ikonlar/ikonlar/kartmodu2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKartmodu->setIcon(icon7);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        lbOrnekCumle = new QLabel(splitter_2);
        lbOrnekCumle->setObjectName(QString::fromUtf8("lbOrnekCumle"));
        lbOrnekCumle->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(lbOrnekCumle);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout1 = new QGridLayout(frame);
        gridLayout1->setSpacing(2);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        aracKutusu = new QToolBox(frame);
        aracKutusu->setObjectName(QString::fromUtf8("aracKutusu"));
        pOturumAc = new QWidget();
        pOturumAc->setObjectName(QString::fromUtf8("pOturumAc"));
        pOturumAc->setGeometry(QRect(0, 0, 145, 207));
        vboxLayout1 = new QVBoxLayout(pOturumAc);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(pOturumAc);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout1->addWidget(label);

        cbKullaniciAd = new QComboBox(pOturumAc);
        cbKullaniciAd->setObjectName(QString::fromUtf8("cbKullaniciAd"));

        vboxLayout1->addWidget(cbKullaniciAd);

        label_2 = new QLabel(pOturumAc);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout1->addWidget(label_2);

        cbSorulacakBolum = new QComboBox(pOturumAc);
        cbSorulacakBolum->setObjectName(QString::fromUtf8("cbSorulacakBolum"));

        vboxLayout1->addWidget(cbSorulacakBolum);

        cbTrtoIng = new QCheckBox(pOturumAc);
        cbTrtoIng->setObjectName(QString::fromUtf8("cbTrtoIng"));
        QFont font;
        font.setPointSize(8);
        cbTrtoIng->setFont(font);
        cbTrtoIng->setTristate(false);

        vboxLayout1->addWidget(cbTrtoIng);

        cBgizlegoster = new QCheckBox(pOturumAc);
        cBgizlegoster->setObjectName(QString::fromUtf8("cBgizlegoster"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        cBgizlegoster->setFont(font1);
        cBgizlegoster->setLayoutDirection(Qt::LeftToRight);

        vboxLayout1->addWidget(cBgizlegoster);

        tbAyarlarKaydet = new QPushButton(pOturumAc);
        tbAyarlarKaydet->setObjectName(QString::fromUtf8("tbAyarlarKaydet"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/ikonlar/ikonlar/cnr-pending.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbAyarlarKaydet->setIcon(icon8);

        vboxLayout1->addWidget(tbAyarlarKaydet);

        aracKutusu->addItem(pOturumAc, icon4, QString::fromUtf8("Oturum A\303\247"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 160, 192));
        gridLayout2 = new QGridLayout(page);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        rByanlislar = new QCheckBox(page);
        rByanlislar->setObjectName(QString::fromUtf8("rByanlislar"));
        rByanlislar->setFont(font);

        gridLayout2->addWidget(rByanlislar, 1, 0, 1, 1);

        pBKartMod = new QPushButton(page);
        pBKartMod->setObjectName(QString::fromUtf8("pBKartMod"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../../../../usr/kde/3.5/share/icons/crystalsvg/16x16/actions/make_kdevelop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBKartMod->setIcon(icon9);

        gridLayout2->addWidget(pBKartMod, 0, 0, 1, 1);

        aracKutusu->addItem(page, icon7, QString::fromUtf8("Kart Modu"));
        pArama = new QWidget();
        pArama->setObjectName(QString::fromUtf8("pArama"));
        pArama->setGeometry(QRect(0, 0, 179, 192));
        gridLayout3 = new QGridLayout(pArama);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        listWidget_2 = new QListWidget(pArama);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        gridLayout3->addWidget(listWidget_2, 2, 1, 1, 1);

        listWidget = new QListWidget(pArama);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout3->addWidget(listWidget, 2, 0, 1, 1);

        lineEdit = new QLineEdit(pArama);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout3->addWidget(lineEdit, 1, 0, 1, 2);

        cBArama = new QCheckBox(pArama);
        cBArama->setObjectName(QString::fromUtf8("cBArama"));

        gridLayout3->addWidget(cBArama, 0, 0, 1, 1);

        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/ikonlar/ikonlar/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        aracKutusu->addItem(pArama, icon10, QString::fromUtf8("Arama"));

        vboxLayout->addWidget(aracKutusu);


        gridLayout1->addLayout(vboxLayout, 0, 0, 1, 1);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout4 = new QGridLayout(frame_2);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout5 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout5->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout5->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(5);
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        lblDogruYanlis = new QLabel(frame_2);
        lblDogruYanlis->setObjectName(QString::fromUtf8("lblDogruYanlis"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(218, 218, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 72, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(236, 236, 36, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(109, 109, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(145, 145, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(236, 236, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        lblDogruYanlis->setPalette(palette);
        QFont font2;
        font2.setPointSize(14);
        lblDogruYanlis->setFont(font2);
        lblDogruYanlis->setFrameShape(QFrame::StyledPanel);
        lblDogruYanlis->setFrameShadow(QFrame::Sunken);
        lblDogruYanlis->setAlignment(Qt::AlignCenter);
        lblDogruYanlis->setWordWrap(false);

        vboxLayout2->addWidget(lblDogruYanlis);

        lblDogrusu = new QLabel(frame_2);
        lblDogrusu->setObjectName(QString::fromUtf8("lblDogrusu"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush8(QColor(141, 121, 239, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(237, 233, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(189, 177, 247, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(70, 60, 119, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(94, 80, 159, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush13(QColor(198, 188, 247, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        lblDogrusu->setPalette(palette1);
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        font3.setStyleStrategy(QFont::PreferDefault);
        lblDogrusu->setFont(font3);
        lblDogrusu->setCursor(QCursor(Qt::ArrowCursor));
        lblDogrusu->setFrameShape(QFrame::Box);
        lblDogrusu->setFrameShadow(QFrame::Sunken);
        lblDogrusu->setTextFormat(Qt::AutoText);
        lblDogrusu->setScaledContents(false);
        lblDogrusu->setAlignment(Qt::AlignCenter);
        lblDogrusu->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        vboxLayout2->addWidget(lblDogrusu);


        gridLayout5->addLayout(vboxLayout2, 0, 1, 1, 1);

        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        lblA = new QLabel(frame_2);
        lblA->setObjectName(QString::fromUtf8("lblA"));
        lblA->setFrameShape(QFrame::Box);
        lblA->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout3->addWidget(lblA);

        lblB = new QLabel(frame_2);
        lblB->setObjectName(QString::fromUtf8("lblB"));
        lblB->setFrameShape(QFrame::Box);
        lblB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout3->addWidget(lblB);

        lblC = new QLabel(frame_2);
        lblC->setObjectName(QString::fromUtf8("lblC"));
        lblC->setFrameShape(QFrame::Box);
        lblC->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout3->addWidget(lblC);

        lblD = new QLabel(frame_2);
        lblD->setObjectName(QString::fromUtf8("lblD"));
        lblD->setFrameShape(QFrame::Box);
        lblD->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout3->addWidget(lblD);

        lblE = new QLabel(frame_2);
        lblE->setObjectName(QString::fromUtf8("lblE"));
        lblE->setFrameShape(QFrame::Box);
        lblE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout3->addWidget(lblE);


        gridLayout5->addLayout(vboxLayout3, 1, 0, 1, 1);

        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        tBGizle = new QToolButton(frame_2);
        tBGizle->setObjectName(QString::fromUtf8("tBGizle"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/ikonlar/ikonlar/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBGizle->setIcon(icon11);

        hboxLayout->addWidget(tBGizle);

        pbDigerSoru = new QPushButton(frame_2);
        pbDigerSoru->setObjectName(QString::fromUtf8("pbDigerSoru"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/ikonlar/ikonlar/1rightarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDigerSoru->setIcon(icon12);

        hboxLayout->addWidget(pbDigerSoru);


        vboxLayout4->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        lblCevaplanSayisi = new QLabel(frame_2);
        lblCevaplanSayisi->setObjectName(QString::fromUtf8("lblCevaplanSayisi"));
        lblCevaplanSayisi->setFrameShape(QFrame::NoFrame);
        lblCevaplanSayisi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(lblCevaplanSayisi);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        lblTamSayi = new QLabel(frame_2);
        lblTamSayi->setObjectName(QString::fromUtf8("lblTamSayi"));
        lblTamSayi->setFrameShape(QFrame::NoFrame);
        lblTamSayi->setFrameShadow(QFrame::Plain);

        hboxLayout1->addWidget(lblTamSayi);

        line = new QFrame(frame_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(line);

        lblDogruSayisi = new QLabel(frame_2);
        lblDogruSayisi->setObjectName(QString::fromUtf8("lblDogruSayisi"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush14(QColor(52, 197, 50, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush14);
        QBrush brush15(QColor(107, 255, 105, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush15);
        QBrush brush16(QColor(79, 226, 77, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush16);
        QBrush brush17(QColor(26, 98, 25, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush17);
        QBrush brush18(QColor(34, 131, 33, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush18);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush19(QColor(153, 226, 152, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        lblDogruSayisi->setPalette(palette2);
        QFont font4;
        font4.setUnderline(true);
        lblDogruSayisi->setFont(font4);

        hboxLayout1->addWidget(lblDogruSayisi);

        line_2 = new QFrame(frame_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        hboxLayout1->addWidget(line_2);

        lblYanlisSayisi = new QLabel(frame_2);
        lblYanlisSayisi->setObjectName(QString::fromUtf8("lblYanlisSayisi"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush20(QColor(239, 66, 14, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush20);
        QBrush brush21(QColor(255, 150, 118, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush21);
        QBrush brush22(QColor(247, 108, 66, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush22);
        QBrush brush23(QColor(119, 33, 7, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush23);
        QBrush brush24(QColor(159, 44, 9, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush24);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush25(QColor(247, 160, 134, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush25);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush21);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush22);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush24);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush20);
        lblYanlisSayisi->setPalette(palette3);
        lblYanlisSayisi->setFont(font4);

        hboxLayout1->addWidget(lblYanlisSayisi);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout4->addLayout(hboxLayout1);


        gridLayout5->addLayout(vboxLayout4, 2, 1, 1, 1);

        vboxLayout5 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        rdbCevap_1 = new QRadioButton(frame_2);
        rdbCevap_1->setObjectName(QString::fromUtf8("rdbCevap_1"));
        rdbCevap_1->setCursor(QCursor(Qt::PointingHandCursor));

        vboxLayout5->addWidget(rdbCevap_1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(verticalSpacer);

        rdbCevap_2 = new QRadioButton(frame_2);
        rdbCevap_2->setObjectName(QString::fromUtf8("rdbCevap_2"));
        rdbCevap_2->setCursor(QCursor(Qt::PointingHandCursor));

        vboxLayout5->addWidget(rdbCevap_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(verticalSpacer_2);

        rdbCevap_3 = new QRadioButton(frame_2);
        rdbCevap_3->setObjectName(QString::fromUtf8("rdbCevap_3"));
        rdbCevap_3->setCursor(QCursor(Qt::PointingHandCursor));

        vboxLayout5->addWidget(rdbCevap_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(verticalSpacer_3);

        rdbCevap_4 = new QRadioButton(frame_2);
        rdbCevap_4->setObjectName(QString::fromUtf8("rdbCevap_4"));
        rdbCevap_4->setCursor(QCursor(Qt::PointingHandCursor));

        vboxLayout5->addWidget(rdbCevap_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(verticalSpacer_4);

        rdbCevap_5 = new QRadioButton(frame_2);
        rdbCevap_5->setObjectName(QString::fromUtf8("rdbCevap_5"));
        rdbCevap_5->setCursor(QCursor(Qt::PointingHandCursor));

        vboxLayout5->addWidget(rdbCevap_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(verticalSpacer_5);


        gridLayout5->addLayout(vboxLayout5, 1, 1, 1, 1);


        gridLayout4->addLayout(gridLayout5, 0, 0, 1, 1);

        splitter->addWidget(frame_2);
        splitter_2->addWidget(splitter);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        toolBar->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
#ifndef QT_NO_SHORTCUT
        lblA->setBuddy(rdbCevap_1);
        lblB->setBuddy(rdbCevap_2);
        lblC->setBuddy(rdbCevap_3);
        lblD->setBuddy(rdbCevap_4);
        lblE->setBuddy(rdbCevap_5);
#endif // QT_NO_SHORTCUT

        toolBar->addAction(actionKullanici);
        toolBar->addAction(actionVeri_Dosyas_Se);
        toolBar->addAction(actionYanlilariGoster);
        toolBar->addSeparator();
        toolBar->addAction(actionKartmodu);
        toolBar->addAction(action_e_Kelime_Aktar);
        toolBar->addAction(actionHakkinda);
        toolBar->addSeparator();
        toolBar->addAction(actionKapat);

        retranslateUi(MainWindow);
        QObject::connect(actionKapat, SIGNAL(activated(int)), MainWindow, SLOT(close()));

        aracKutusu->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Imtihan", 0, QApplication::UnicodeUTF8));
        actionHakkinda->setText(QApplication::translate("MainWindow", "Hakk\304\261nda", 0, QApplication::UnicodeUTF8));
        actionKapat->setText(QApplication::translate("MainWindow", "Kapat", 0, QApplication::UnicodeUTF8));
        actionYanlilariGoster->setText(QApplication::translate("MainWindow", "Yanl\304\261\305\237lar\304\261 G\303\266ster", 0, QApplication::UnicodeUTF8));
        actionKullanici->setText(QApplication::translate("MainWindow", "Kullan\304\261c\304\261 Ekle/\303\207\304\261kar/Yedekle", 0, QApplication::UnicodeUTF8));
        action_e_Kelime_Aktar->setText(QApplication::translate("MainWindow", "\304\260\303\247e Kelime Aktar", 0, QApplication::UnicodeUTF8));
        actionVeri_Dosyas_Se->setText(QApplication::translate("MainWindow", "Veri Dosyas\304\261 Se\303\247", 0, QApplication::UnicodeUTF8));
        actionKartmodu->setText(QApplication::translate("MainWindow", "Kart Modu A\303\247", 0, QApplication::UnicodeUTF8));
        actionKartmodu->setIconText(QApplication::translate("MainWindow", "Kart Modu", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lbOrnekCumle->setToolTip(QApplication::translate("MainWindow", "E\304\237er \303\266rnek c\303\274mle varsa burada \303\247\304\261kar.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lbOrnekCumle->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Kullan\304\261c\304\261 Ad\304\261 :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Sorulacak B\303\266l\303\274m :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbTrtoIng->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        cbTrtoIng->setText(QApplication::translate("MainWindow", "Tersten Sor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cBgizlegoster->setToolTip(QApplication::translate("MainWindow", "Gizle G\303\266ster \303\266zeli\304\237ini a\303\247ar kapar.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cBgizlegoster->setText(QApplication::translate("MainWindow", "Gizle-G\303\266ster", 0, QApplication::UnicodeUTF8));
        tbAyarlarKaydet->setText(QApplication::translate("MainWindow", "Oturumu &A\303\247", 0, QApplication::UnicodeUTF8));
        aracKutusu->setItemText(aracKutusu->indexOf(pOturumAc), QApplication::translate("MainWindow", "Oturum A\303\247", 0, QApplication::UnicodeUTF8));
        rByanlislar->setText(QApplication::translate("MainWindow", "Sadece yanl\304\261\305\237lardan", 0, QApplication::UnicodeUTF8));
        pBKartMod->setText(QApplication::translate("MainWindow", "Kart Modu A\303\247", 0, QApplication::UnicodeUTF8));
        aracKutusu->setItemText(aracKutusu->indexOf(page), QApplication::translate("MainWindow", "Kart Modu", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cBArama->setToolTip(QApplication::translate("MainWindow", "Bunu T\304\261klay\304\261p yeni oturum a\303\247t\304\261\304\237\304\261n\304\261zda arama yapabilirsiniz.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cBArama->setText(QApplication::translate("MainWindow", "Aramay\304\261 A\303\247", 0, QApplication::UnicodeUTF8));
        aracKutusu->setItemText(aracKutusu->indexOf(pArama), QApplication::translate("MainWindow", "Arama", 0, QApplication::UnicodeUTF8));
        lblDogruYanlis->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        lblDogrusu->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        lblA->setText(QApplication::translate("MainWindow", "a)", 0, QApplication::UnicodeUTF8));
        lblB->setText(QApplication::translate("MainWindow", "b)", 0, QApplication::UnicodeUTF8));
        lblC->setText(QApplication::translate("MainWindow", "c)", 0, QApplication::UnicodeUTF8));
        lblD->setText(QApplication::translate("MainWindow", "d)", 0, QApplication::UnicodeUTF8));
        lblE->setText(QApplication::translate("MainWindow", "e)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tBGizle->setToolTip(QApplication::translate("MainWindow", "Cevaplar\304\261 gizle yada g\303\266ster", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tBGizle->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        tBGizle->setShortcut(QApplication::translate("MainWindow", "G", 0, QApplication::UnicodeUTF8));
        pbDigerSoru->setText(QApplication::translate("MainWindow", "    Di\304\237er Soru", 0, QApplication::UnicodeUTF8));
        pbDigerSoru->setShortcut(QApplication::translate("MainWindow", "I", 0, QApplication::UnicodeUTF8));
        lblCevaplanSayisi->setText(QApplication::translate("MainWindow", ".....", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        lblTamSayi->setText(QApplication::translate("MainWindow", ".....", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblDogruSayisi->setToolTip(QApplication::translate("MainWindow", "Do\304\237ru Say\304\261s\304\261", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblDogruSayisi->setText(QApplication::translate("MainWindow", "...........", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblYanlisSayisi->setToolTip(QApplication::translate("MainWindow", "Yanl\304\261\305\237 Say\304\261s\304\261", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblYanlisSayisi->setText(QApplication::translate("MainWindow", "............", 0, QApplication::UnicodeUTF8));
        rdbCevap_1->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        rdbCevap_1->setShortcut(QApplication::translate("MainWindow", "A", 0, QApplication::UnicodeUTF8));
        rdbCevap_2->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        rdbCevap_2->setShortcut(QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8));
        rdbCevap_3->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        rdbCevap_3->setShortcut(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        rdbCevap_4->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        rdbCevap_4->setShortcut(QApplication::translate("MainWindow", "D", 0, QApplication::UnicodeUTF8));
        rdbCevap_5->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        rdbCevap_5->setShortcut(QApplication::translate("MainWindow", "E", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F_EZBERLE_H
