#include "logindata.h"
#include "globaldef.h"

LoginData::LoginData()
{
    if(this->dataCnn(GLOBALDEF::QMYSQL))
    {
        qDebug()<<"连接数据库失败";
    }
}

bool LoginData::selectData(QString userName, QString passWord)
{

}
