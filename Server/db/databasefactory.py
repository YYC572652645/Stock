#****************************************************
# 作者：YYC
# 功能：数据库简单工厂模式
# 日期：2017-11-02
#****************************************************

from globaldef import DATABASETYPE
from db.logdata import LogData

class DataBaseFactory():

    def createDataBase(self, type):
        dataBase = None

        # 日志数据库
        if(DATABASETYPE.LOGDATA == type):
            dataBase =  LogData()

        return dataBase