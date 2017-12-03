#****************************************************
# 作者：YYC
# 功能：接收消息
# 日期：2017-10-28
#****************************************************

from socketserver  import  BaseRequestHandler
import globaldef
from tcpserver.protocol import PROTOCOL
from tcpserver.messagehandler import MessageHandler
from role.role import Role
import json
import time


# 处理来自客户端的消息
class TcpDataHandler(BaseRequestHandler):
    # 客户端列表
    data = {}

    # 创建用户管理对象
    role = Role()

    # 处理客户端请求
    def handle(self):
        try:
            # 初始化
            self.messageHandler = MessageHandler()

            # 接收客户端的Socket
            connSock = self.request
            self.exit = ""

            # 获取客户端的IP
            self.address = connSock.getpeername()

            print("用户", connSock.getpeername(), "进行了连接请求")

            while True:
                # 接收客户端发来的消息
                jsonStr = connSock.recv(globaldef.DATASIZE).decode()

                if(len(jsonStr) <= 0):
                    continue

                print("接收到用户信息", jsonStr)

                # 读取json包
                self.data = self.readJson(jsonStr)
                self.messageHandler.onCommand(self.protocolNumber, self.data, self)

                # 如果客户端退出了，则去除该套接字
                if(self.exit == globaldef.EXIT):
                    self.removeSock()
                    break

                # 休眠0.1秒，减小cpu消耗
                time.sleep(0.1)

        except Exception as e:
            self.removeSock()
            print("出错了" , e.args)

    # 去除已经关闭的Socket
    def removeSock(self):
        try:
            print("已关闭...", self.role.getRole(self.data.get(globaldef.USER)).getpeername())

            self.role.deleteRole(self.data.get(globaldef.USER))

        except Exception as e:
            print(e.args)

    # 读取json数据
    def readJson(self, jsonStr):

        # 判斷如果是合法JSON数据，直接取数据
        if(self.isJson(jsonStr)):
            data = json.loads(jsonStr)
            data = data.get("data")

            self.protocolNumber = int(data.get(globaldef.PROTOCOLNAME))
            del data[globaldef.PROTOCOLNAME]

            self.data = data

        # 判斷如果不是合法JSON数据，进行拆解数据包
        else:
            beginIndex = 0
            for index in range(len(jsonStr)):
                if(self.isJson(jsonStr[beginIndex:index])):
                    data = json.loads(jsonStr[beginIndex:index])
                    data = data.get("data")

                    self.protocolNumber = int(data[globaldef.PROTOCOLNAME])
                    del data[globaldef.PROTOCOLNAME]

                    beginIndex = index

                    if(self.protocolNumber == PROTOCOL.ADDSOCKETREQ):
                        self.data = data
                        self.messageHandler.onCommand(self.protocolNumber, data, self)

        return data

    # 判断json格式是否合法
    def isJson(self,jsonStr):
        try:
            json.loads(jsonStr)
        except ValueError:
            return False
        return True

    # 添加角色
    def addRole(self):
        self.role.addRole(self.data.get(globaldef.USER), self.request)

    # 向客户端发送消息
    def netSend(self, protocol, dataDictionary):
        try:
            self.dataTotal = {}       # 总的json数据

            # json组包
            dataDictionary[globaldef.PROTOCOLNAME] = str(protocol)
            self.dataTotal[globaldef.DATANAME] = dataDictionary

            # 编码成json格式的数据
            encodejson = json.dumps(self.dataTotal, ensure_ascii = False)

            print(encodejson)

            self.role.getRole(dataDictionary.get(globaldef.USER)).sendall(encodejson.encode())

        except Exception as e:
            print(e.args)

    # 做一个广播
    def netSendAll(self, protocol, dataDictionary):
        self.dataTotal = {}  # 总的json数据

        # json组包
        dataDictionary[globaldef.PROTOCOLNAME] = str(protocol)
        self.dataTotal[globaldef.DATANAME] = dataDictionary

        # 编码成json格式的数据
        encodejson = json.dumps(self.dataTotal, ensure_ascii=False)

        for key, value in self.role.getAllRole().items():
            if (key != dataDictionary.get(globaldef.USER)):
                value.sendall(encodejson.encode())