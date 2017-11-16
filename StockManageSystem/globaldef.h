#ifndef GLOBALDEF_H
#define GLOBALDEF_H
#include<QString>

#include <QString>
#include <QDebug>
#include "groupchat/client/client.h"
#include "groupchat/protocol.h"
#include "messageinfo.h"

#define MSGSIZE  100
#define BUFFERSIZE 4096 * 1024

#ifndef LOADQSS
#define LOADQSS(qssFile)                      \
{                                             \
    QString strQss;                           \
    QFile file(qssFile);                      \
    file.open(QFile::ReadOnly);               \
    if(file.isOpen())                         \
    {                                         \
        strQss=QLatin1String(file.readAll()); \
        qApp->setStyleSheet(strQss);          \
        file.close();                         \
    }                                         \
}
#endif

#ifndef SAFEDELETE
#define SAFEDELETE(pointer) \
{                           \
    if(pointer)             \
    {                       \
        delete pointer;     \
    }                       \
    pointer = NULL;         \
}
#endif


static QString myUserName = NULL;

//群聊天消息
typedef struct MessageData
{
    QString userName;
    QString textContent;
    QString font;
    QString fontSize;
    QString fontColor;
    QString dateTime;
}MessageData;

//注册数据
typedef struct UserData
{
    QString userName;
    QString passWord;
    QString nickName;
    QString email;
    QString phone;
}UserData;


//窗口类型
enum FRAMETYPE
{
    DWDAN,
    FRAMTWOZ,
    THREESTARZ,
    FOURSTARZ,
    FIVESTARZ,
    TWOSTARH,
    THREESTARH,
};

namespace GLOBALDEF
{
const static QString APPNAME         = "股票分析";
const static QString CQSTOCK         = "重庆时时彩";
const static QString BJSTOCK         = "北京时时彩";
const static QString HOMEPAGE        = "股票分析首页";
const static QString DWDAN           = "定位胆";
const static QString TWOSTARZ        = "二星直选";
const static QString THREESTARZ      = "三星直选";
const static QString FOURSTARZ       = "四星直选";
const static QString FIVESTARZ       = "五星直选";
const static QString TWOSTARH        = "二星混选";
const static QString THREESTARH      = "三星混选";
const static QString PLANTEMPLATE    = "计划模板设置";
const static QString PEOPLEPLAN      = "人工计划平台";
const static QString QQSEND          = "自定义QQ群发";
const static QString GOLDENSECTION   = "大底黄金分割";
const static QString TWOSTARSHRINK   = "时时彩二星缩水";
const static QString THREESTARSHRINK = "时时彩三星缩水";
const static QString FOURSTARSHRINK  = "时时彩四星缩水";
const static QString FIVESTARSHRINK  = "时时彩五星缩水";
const static QString UNIVERSALSPLIC  = "万能拼接工具";
const static QString VERTOOL         = "大底验证工具";
const static QString NORMALCALC      = "常规倍投计算";
const static QString TBCALC          = "推波倍投计算";
const static QString USERNAME        = "  用户名：";
const static QString PASSWORD        = "  密码：";
const static QString SYSTEMINFO      = "系统提示";
const static QString REGISTERUSER    = "新用户注册";
const static QString GROUPCHAT       = "群聊";
const static QString HOMEPAGEURL     = "www.baidu.com";
const static QString CLOSEBTNNAME    = "closeButton";
const static QString COMBOBOXMENU    = "comboBoxMenu";
const static QString LOGOIMG         = ":/image/image/app.jpg";
const static QString SUCCESSIMG      = ":/image/image/ok.png";
const static QString FAILIMG         = ":/image/image/fail.png";
const static QString LINKIMAGE       = ":/image/image/link.gif";
const static QString USERLOGINIMG    = ":/image/image/login.png";
const static QString USERREGISTERIMG = ":/image/image/register.png";
const static QString SESSIONPATH     = ":/image/image/session.png";
const static QString QSSPATH         = ":/qss/qss/style.qss";
const static QString TIMEFORMAT      = "yyyy-MM-dd hh:mm:ss";
const static QString BEGINTIMEFORMAT = "yyyy-MM-dd 00:00:00";
const static QString FONTNAME        = "ZYSong";
const static int     REFRESHTIME     = 3500;
const static int     LINEDITLEN      = 120;
const static int     BIGFONTSIZE     = 14;
const static int     SMALLFONTSIZE   = 12;
const static int     INTERNAL        = 3000;
const static int     HEARTBREAKMAX   = 5;

enum SQLVERSION
{
    QMYSQL,
    QSQLITE,
};

enum TABLETYPE
{
    LOGINDATA,
    LOGDATA,

};

}

#endif // GLOBALDEF_H
