#-------------------------------------------------
#
# Project created by QtCreator 2017-11-14T20:59:02
#
#-------------------------------------------------

QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChatDemo
TEMPLATE = app


SOURCES += main.cpp\
    client/client.cpp \
    messagehandler/messagehandler.cpp \
    titlebar/titlebar.cpp \
    config/qreadini.cpp \
    database/database.cpp \
    database/databasefactory.cpp \
    chattogether/chattogether.cpp \
    database/logindata/logindata.cpp \
    database/logdata/logdata.cpp

HEADERS  += client/client.h \
    messagehandler/messagehandler.h \
    globaldef.h \
    protocol.h \
    titlebar/titlebar.h \
    config/qreadini.h \
    database/database.h \
    database/databasefactory.h \
    chattogether/chattogether.h \
    database/logindata/logindata.h \
    database/logdata/logdata.h

FORMS += chattogether/chattogether.ui
