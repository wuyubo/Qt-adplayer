#-------------------------------------------------
#
# Project created by QtCreator 2015-10-21T19:04:47
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = adSever
TEMPLATE = app


SOURCES += main.cpp\
        adsever.cpp \
    adtcp.cpp \
    client.cpp

HEADERS  += adsever.h \
    adtcp.h \
    client.h

FORMS    += adsever.ui
