#****************************************************
# 作者：YYC
# 功能：主函数
# 日期：2017-10-28
#****************************************************

import threading
import socketserver
from http.server import CGIHTTPRequestHandler, HTTPServer
import globaldef
from tcpserver.tcpserver import TcpDataHandler

def startTcpServer():
   servers = HTTPServer((globaldef.IP, globaldef.HTTPPORT),  CGIHTTPRequestHandler)
   print('HTTP服务器已启动...')
   servers.serve_forever()

def startHttpServer():
   servers = socketserver.ThreadingTCPServer((globaldef.IP, globaldef.PORT), TcpDataHandler)
   print("TCP服务器已启动...")
   servers.serve_forever()

# 主函数入口
if __name__ == '__main__':

   tcpThread = threading.Thread(target=startTcpServer)
   httpThread = threading.Thread(target=startHttpServer)

   tcpThread.start()
   httpThread.start()





