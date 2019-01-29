Python 3.6.5 (v3.6.5:f59c0932b4, Mar 28 2018, 17:00:18) [MSC v.1900 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> import socket
>>> socket.gethostbyname(socket.gethostname())
'127.0.0.1'
>>> client=socket.socket()
>>> client.connect('127.0.0.1',5555)
Traceback (most recent call last):
  File "<pyshell#3>", line 1, in <module>
    client.connect('127.0.0.1',5555)
TypeError: connect() takes exactly one argument (2 given)
>>> client.connect('127.0.0.1')
Traceback (most recent call last):
  File "<pyshell#4>", line 1, in <module>
    client.connect('127.0.0.1')
TypeError: getsockaddrarg: AF_INET address must be tuple, not str
>>> help(client.connect)
Help on built-in function connect:

connect(...) method of socket.socket instance
    connect(address)
    
    Connect the socket to a remote address.  For IP sockets, the address
    is a pair (host, port).

>>> client.connect(('127.0.0.1',5555))
>>> client.recv()
Traceback (most recent call last):
  File "<pyshell#7>", line 1, in <module>
    client.recv()
TypeError: recv() takes at least 1 argument (0 given)
>>> client.recv(1000).decode()
'hello'
>>> client.recv(1000).decode()
'socket programming'
>>> client.send("msg from client".encode())
15
>>> 
