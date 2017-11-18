#****************************************************
# 作者：YYC
# 功能：数据库日志
# 日期：2017-11-02
#****************************************************
from db.database import DataBase
import pymysql
import globaldef

class LogData(DataBase):

    def __init__(self):
        self.dataConn()

    def insertData(self, dict):
        try:
            str = "insert into  " + globaldef.TABCHATLOG + " values ('"

            str += dict.get(globaldef.CHATUSERNAME)      + "', '"

            str += dict.get(globaldef.CHATTEXT)          + "', '"

            str += dict.get(globaldef.CHATTIME)          + "') ;"

            print(str)

            data = self.cursor.execute(str)

            self.conn.commit()

        except Exception as e:
            print("sql插入异常", e.args)

    def deleteData(self, dict):
        try:
            str = "delete from "  + globaldef.TABCHATLOG              + " where "

            str += "username = '" + dict.get(globaldef.USERNAME)      + "' and  "

            str += "text = '"     + dict.get(globaldef.CHATTEXT)      + "' and  "

            str += "time = '"     + dict.get(globaldef.CHATTIME)      + "' ;    "

            print(str)

            data = self.cursor.execute(str)

            self.conn.commit()

        except Exception as e:
            print("sql删除异常", e.args)
