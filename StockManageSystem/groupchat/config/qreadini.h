#ifndef QREADINI_H
#define QREADINI_H
#include<QSettings>

/***************************************************************
   功能:读取INI配置文件

   创建人:YYC

   创建时间:2017-7-29
**************************************************************/

#define DATACONFIG  QReadIni::getInstance()->getDataConfig()
#define INICONFIG   QReadIni::getInstance()


typedef struct DataConfig
{
    QString ip;                //IP地址
    QString port;              //端口
    QString mysqlVersion;      //MYSQL版本
    QString sqliteVersion;     //SQLITE版本
    QString dataBaseName;      //数据库名称
    QString userName;          //用户名
    QString passWord;          //密码
    QString myUserName;        //我的用户名
    QString myPassWord;        //我的密码
}DataConfig;


class QReadIni
{
public:
    static QReadIni*getInstance();                      //单例模式
    void readIni();                                     //读取所有配置文件
    const DataConfig &getDataConfig();                  //获取数据库配置信息
    void writeIni(QString userName, QString passWord);  //写入配置文件
private:
    QReadIni();                               //私有构造
    DataConfig dataConfig;                    //数据库配置信息
    static QReadIni*instance;                 //单例模式

};

#endif // QREADINI_H
