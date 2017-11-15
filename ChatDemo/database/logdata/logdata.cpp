#include "logdata.h"
#include "globaldef.h"
LogData::LogData()
{
    if(this->dataCnn(GLOBALDEF::QMYSQL))
    {
        qDebug()<<"连接数据库失败";
    }
}

void LogData::insrtData(DataLog data)
{

}
