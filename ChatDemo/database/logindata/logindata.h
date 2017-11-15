#ifndef LOGINDATA_H
#define LOGINDATA_H
#include "database/database.h"

/***************************************************************
   功能: 数据库用户登录类

   创建人:YYC

   创建时间:2017-11-15
**************************************************************/

class LoginData : public DataBase
{
public:
    LoginData();

    bool selectData(QString userName, QString passWord);
};

#endif // LOGINDATA_H
