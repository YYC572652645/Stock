#****************************************************
# 作者：YYC
# 功能：消息处理
# 日期：2017-10-28
#****************************************************

import globaldef
from tcpserver.protocol import PROTOCOL
from db.databasefactory import DataBaseFactory
from role.role import Role

class MessageHandler():
    # 构造函数
    def __init__(self):
        self.commandList = [None] * globaldef.FUNSIZE
        self.initCommandList()

    # 所有接收客户端数据函数存储到列表
    def initCommandList(self):
        self.commandList[PROTOCOL.LOGINREQUEST]  = self.receiveLoginData
        self.commandList[PROTOCOL.CLOSESOCKET] = self.receiveCloseRequest
        self.commandList[PROTOCOL.SENDMESSAGEREQ] = self.sendMessageRequest

    # 所有接收客户端数据函数的调用
    def onCommand(self, protocolNumber, dict, sock):
        self.commandList[protocolNumber](dict, sock)

    # 接收客户端的关闭请求
    def receiveCloseRequest(self, dict, sock):
        sock.exit = globaldef.EXIT

    # 发送消息请求
    def sendMessageRequest(self, dict, sock):
        sock.netSend(PROTOCOL.SENDMESSAGEINFO, dict, dict.get(globaldef.userName))







