
import socketserver

from http.server import BaseHTTPRequestHandler, HTTPServer

class HttpDataHandler(BaseHTTPRequestHandler):

    def do_GET(self):
        pass

    def do_POST(self):
        pass

    def process(self, type):
        pass
