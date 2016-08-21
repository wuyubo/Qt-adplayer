#-------------------------------------------------
#
# Project created by QtCreator 2015-10-21T19:05:38
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = adClient
TEMPLATE = app


SOURCES += main.cpp\
        adclient.cpp \
    addate.cpp \
    adsocket.cpp \
    weather.cpp \
    rollmassege.cpp

HEADERS  += adclient.h \
    addate.h \
    adsocket.h \
    weather.h \
    rollmassege.h

FORMS    += adclient.ui
