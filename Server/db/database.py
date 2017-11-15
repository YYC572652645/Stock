#****************************************************
# 作者：YYC
# 功能：所有数据库的父类
# 日期：2017-11-02
#****************************************************

import pymysql

class DataBase():
    # 连接数据库
    def dataConn(self):
        try:
            self.conn = connect = pymysql.Connect(
                        host='localhost',
                        port=3306,
                        user='root',
                        passwd='root',
                        db='stockmanage',
                        charset='utf8'
                        )
            self.cursor = self.conn.cursor()
        except Exception as e:
            print(e.args)