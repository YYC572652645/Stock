#****************************************************
# 作者：YYC
# 功能：消息处理
# 日期：2017-10-28
#****************************************************

import globaldef
from tcpserver.protocol import PROTOCOL
from db.databasefactory import DataBaseFactory
from role.role import Role
from globaldef import DATABASETYPE

class MessageHandler():
    # 构造函数
    def __init__(self):
        self.commandList = [None] * globaldef.FUNSIZE
        self.initCommandList()
        dataBase = DataBaseFactory()
        self.logData = dataBase.createDataBase(DATABASETYPE.LOGDATA)

    # 所有接收客户端数据函数存储到列表
    def initCommandList(self):
        self.commandList[PROTOCOL.ADDSOCKETREQ] = self.receiveAddSocketRequest
        self.commandList[PROTOCOL.CLOSESOCKET] = self.receiveCloseRequest
        self.commandList[PROTOCOL.SENDMESSAGEREQ] = self.sendMessageRequest
        self.commandList[PROTOCOL.SENDBREAKHEARTREQ] = self.receiveHeartRequest

    # 所有接收客户端数据函数的调用
    def onCommand(self, protocolNumber, dict, sock):
        self.commandList[protocolNumber](dict, sock)

    # 接收客户端的添加请求
    def receiveAddSocketRequest(self, dict, sock):
        sock.addRole()

    # 接收客户端的关闭请求
    def receiveCloseRequest(self, dict, sock):
        sock.exit = globaldef.EXIT

    # 发送消息请求
    def sendMessageRequest(self, dict, sock):
        sock.netSendAll(PROTOCOL.SENDMESSAGEINFO, dict)
        self.logData.insertData(dict)

    # 接收心跳包的请求
    def receiveHeartRequest(self, dict, sock):
        sock.netSend(PROTOCOL.SENDBREAKHEARTINFO, dict)







