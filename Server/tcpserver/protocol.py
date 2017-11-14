#****************************************************
# 作者：YYC
# 功能：通信协议号
# 日期：2017-10-28
#****************************************************

INVALID = -1        #无用协议

class PROTOCOL:
    LOGINREQUEST  = 0     # 登陆请求
    LOGINDATA     = 1     # 服务器数据
    CLOSESOCKET   = 2     # 关闭套接字
    SENDMESSAGEREQ = 3    # 发送消息请求
    SENDMESSAGEINFO = 4   # 发送消息信息


