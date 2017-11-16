#include "logindata.h"
#include "globaldef.h"

/*************************    构造函数      *********************/
LoginData::LoginData()
{
    if(!this->dataCnn(GLOBALDEF::QMYSQL))
    {
        qDebug()<<"连接数据库失败";
    }
}

/*************************    查询数据      *********************/
bool LoginData::selectData(QString userName, QString passWord)
{
    if(!db.isOpen()) db.open();

    QSqlQuery query;

    QString str;

    str = QString("select * from user where username = '%1' and password = '%2';").arg(userName).arg(passWord);

    bool success = query.exec(str);

    if(!success) return false;

    int count = 0;

    while(query.next()) count ++;

    query.clear();

    db.close();

    return count > 0 ? true : false;
}

/*************************    插入数据      *********************/
bool LoginData::insertData(UserData data)
{
    if(!db.isOpen()) db.open();

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

    db.close();

    return true;
}
