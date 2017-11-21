#ifndef LOGINDATA_H
#define LOGINDATA_H
#include <QString>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMutex>
#include "globaldef.h"
#include "groupchat/config/qreadini.h"
#include "groupchat/database/mysql/mysqldatabase.h"

/***************************************************************
   功能: 数据库用户登录类

   创建人:YYC

   创建时间:2017-11-15
**************************************************************/

class LoginData : public MySqlDataBase
{
public:
    LoginData();

    bool selectData(QString userName, QString passWord);
    bool insertData(UserData data);
};

#endif // LOGINDATA_H
