import socket
my = socket.socket(socket.AF_INET , socket.SOCK_STREAM)
my.connect(('data.pr4e.org' , 80))