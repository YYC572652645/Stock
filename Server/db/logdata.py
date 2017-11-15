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
            self.dataConn()

            str = "insert into  " + globaldef.TABCHATLOG + " values ('"

            str += dict.get(globaldef.CHATUSERNAME)      + "', '"

            str += dict.get(globaldef.CHATTEXT)          + "', '"

            str += dict.get(globaldef.CHATTIME)          + "') ;"


            print(str)

            data = self.cursor.execute(str)

            self.conn.commit()

        except Exception as e:
            print(e.args)

