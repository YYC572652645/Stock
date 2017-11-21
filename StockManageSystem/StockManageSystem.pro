#-------------------------------------------------
#
# Project created by QtCreator 2017-11-10T19:16:57
#
#-------------------------------------------------

QT       += core gui axcontainer sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StockManageSystem
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow/mainwindow.cpp \
    messagebox/messagedialog.cpp \
    titlebar/titlebar.cpp \
    maincontent/maincontent.cpp \
    systemtray/systemtray.cpp \
    homepage/homepage.cpp \
    starchoose/starchoose.cpp \
    plantemplate/plantemplate.cpp \
    peopleplan/peopleplan.cpp \
    goldensection/godlensection.cpp \
    twostarshirnk/twostarshrink.cpp \
    threestarshirnk/threestarshirnk.cpp \
    normalcalc/normalcalc.cpp \
    pushcalc/pushcalc.cpp \
    uvslsplic/uvslsplic.cpp \
    registeruser/registeruser.cpp \
    vertool/vertool.cpp\
    groupchat/client/client.cpp \
    groupchat/messagehandler/messagehandler.cpp \
    groupchat/config/qreadini.cpp \
    groupchat/chattogether/chattogether.cpp \
    groupchat/database/mysql/logindata/logindata.cpp \
    groupchat/database/mysql/logdata/logdata.cpp \
    groupchat/chatlog/chatlog.cpp \
    globaldef.cpp \
    pushmessage/pushmessage.cpp \
    groupchat/logmanage/logmanage.cpp \
    groupchat/database/sqllite/localdata/localdata.cpp \
    groupchat/database/sqllite/sqlitedatabase.cpp \
    groupchat/database/mysql/mysqldatabase.cpp \
    httpclient/httpclient.cpp

HEADERS  += mainwindow/mainwindow.h \
    messagebox/messagedialog.h \
    titlebar/titlebar.h \
    globaldef.h \
    maincontent/maincontent.h \
    systemtray/systemtray.h \
    homepage/homepage.h \
    starchoose/starchoose.h \
    plantemplate/plantemplate.h \
    peopleplan/peopleplan.h \
    goldensection/godlensection.h \
    twostarshirnk/twostarshrink.h \
    threestarshirnk/threestarshirnk.h \
    normalcalc/normalcalc.h \
    pushcalc/pushcalc.h \
    uvslsplic/uvslsplic.h \
    registeruser/registeruser.h \
    vertool/vertool.h\
    groupchat/client/client.h \
    groupchat/messagehandler/messagehandler.h \
    groupchat/protocol.h \
    groupchat/config/qreadini.h \
    groupchat/chattogether/chattogether.h \
    groupchat/database/mysql/logindata/logindata.h \
    groupchat/database/mysql/logdata/logdata.h \
    groupchat/chatlog/chatlog.h \
    groupchat/database/databasedef.h \
    messageinfo.h \
    pushmessage/pushmessage.h \
    groupchat/logmanage/logmanage.h \
    groupchat/database/sqllite/localdata/localdata.h \
    groupchat/database/sqllite/sqlitedatabase.h \
    groupchat/database/mysql/mysqldatabase.h \
    httpclient/httpclient.h

FORMS    += mainwindow/mainwindow.ui \
    messagebox/messagedialog.ui \
    maincontent/maincontent.ui \
    homepage/homepage.ui \
    starchoose/starchoose.ui \
    plantemplate/plantemplate.ui \
    peopleplan/peopleplan.ui \
    goldensection/godlensection.ui \
    twostarshirnk/twostarshrink.ui \
    threestarshirnk/threestarshirnk.ui \
    normalcalc/normalcalc.ui \
    pushcalc/pushcalc.ui \
    uvslsplic/uvslsplic.ui \
    registeruser/registeruser.ui \
    vertool/vertool.ui\
    groupchat/chattogether/chattogether.ui \
    groupchat/chatlog/chatlog.ui \
    pushmessage/pushmessage.ui \
    groupchat/logmanage/logmanage.ui


RC_FILE += myapp.rc

RESOURCES += \
    res.qrc
