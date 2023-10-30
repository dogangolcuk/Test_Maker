# -------------------------------------------------
# Project created by QtCreator 2009-07-05T13:49:34
# -------------------------------------------------
QT += webkit \
    xml
TARGET = imtihan
TEMPLATE = app
SOURCES += xmlop.cpp \
    wordSave.cpp \
    wordMemorize.cpp \
    user.cpp \
    mainWindow.cpp \
    main.cpp
HEADERS += zipData.h \
    xmlop.h \
    wordSave.h \
    wordMemorize.h \
    user.h \
    mainWindow.h \
    formYanlislar.h \
    formVeriAktar.h \
    formUserConf.h \
    formKart.h \
    formAbout.h
OTHER_FILES += imtihan.pro \
    eng.ts \
    eng.qm
FORMS += f_yanlislar.ui \
    f_veriaktar.ui \
    f_user.ui \
    f_kart.ui \
    f_hakkinda.ui \
    f_ezberle.ui
RESOURCES += ikonlar.qrc
