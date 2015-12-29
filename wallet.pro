#-------------------------------------------------
#
# Project created by QtCreator 2015-12-21T11:17:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = wallet
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    dlg_create_account.cpp \
    dlg_mnemonic.cpp \
    dlg_check_mnemonic.cpp


HEADERS  += mainwindow.h \
    dlg_create_account.h \
    dlg_mnemonic.h \
    dlg_check_mnemonic.h

FORMS    += mainwindow.ui \
    dlg_create_account.ui \
    dlg_mnemonic.ui \
    dlg_check_mnemonic.ui


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/./ -ltrezor-crypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/./ -ltrezor-cryptod

INCLUDEPATH += $$PWD/trezor-crypto-master
DEPENDPATH += $$PWD/trezor-crypto-master

