#****************************************************
# 作者：YYC
# 功能：通信协议号
# 日期：2017-10-28
#****************************************************

INVALID = -1        #无用协议

class PROTOCOL:
    ADDSOCKETREQ = 0      # 添加请求
    CLOSESOCKET = 1       # 关闭套接字
    SENDMESSAGEREQ = 2    # 发送消息请求
    SENDMESSAGEINFO = 3   # 发送消息信息


