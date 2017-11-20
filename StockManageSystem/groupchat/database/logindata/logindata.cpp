#include "logindata.h"
#include "globaldef.h"

/*************************    构造函数      *********************/
LoginData::LoginData()
{
    if(!this->mysqlDataCnn())
    {
        qDebug()<<"连接数据库失败";
    }
}

/*************************    查询数据      *********************/
bool LoginData::selectData(QString userName, QString passWord)
{
    if(!mysqlDb.isOpen()) mysqlDb.open();

    QSqlQuery query;

    QString str;

    str = QString("select * from user where username = '%1' and password = '%2';").arg(userName).arg(passWord);

    bool success = query.exec(str);

    if(!success) return false;

    int count = 0;

    while(query.next())
    {
        GLOBALDEF::myNickName = query.value(2).toString();
        GLOBALDEF::myVip = query.value(5).toInt();
        count ++;
    }

    query.clear();

    mysqlDb.close();

    return count > 0 ? true : false;
}

/*************************    插入数据      *********************/
bool LoginData::insertData(UserData data)
{
    if(!mysqlDb.isOpen()) mysqlDb.open();

    QSqlQuery query;

    QString str;

    str  = "insert into user values('";

    str += data.userName    + "' , '";

    str += data.passWord    + "' , '";

    str += data.nickName    + "' , '";

    str += data.email       + "' , '";

    str += data.phone       + "' ) ;";

    bool success = query.exec(str);

    if(!success) return false;

    query.clear();

    mysqlDb.close();

    return true;
}
