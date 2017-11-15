#include "qreadini.h"
#include <QDebug>
#include "globaldef.h"
#include <QTextCodec>

QReadIni *QReadIni::instance = NULL;

/****************          单例模式              ***************/
QReadIni *QReadIni::getInstance()
{
    if(instance == NULL)
    {
        instance = new QReadIni();
    }
    return instance;
}

/****************          构造函数              ***************/
QReadIni::QReadIni()
{
    this->readIni();
}

/****************          读取配置文件           ***************/
void QReadIni::readIni()
{
    QSettings * configIniRead  = new QSettings("config.ini",QSettings::IniFormat);          //初始化读取Ini文件对象
    configIniRead->setIniCodec(QTextCodec::codecForName("GB2312"));
    dataConfig.ip              = configIniRead->value("conn/ip").toString();                //IP地址
    dataConfig.port            = configIniRead->value("conn/port").toString();              //端口
    dataConfig.mysqlVersion    = configIniRead->value("conn/mysqlversion").toString();      //数据库版本
    dataConfig.sqliteVersion   = configIniRead->value("conn/sqliteversion").toString();     //数据库版本
    dataConfig.dataBaseName    = configIniRead->value("conn/databasename").toString();      //数据库名称
    dataConfig.userName        = configIniRead->value("conn/username").toString();          //用户名
    dataConfig.passWord        = configIniRead->value("conn/password").toString();          //密码

    SAFEDELETE(configIniRead);
}

/****************          获取数据库配置信息       ***************/
const DataConfig &QReadIni::getDataConfig()
{
    return dataConfig;
}
