Python 3.6.5 (v3.6.5:f59c0932b4, Mar 28 2018, 17:00:18) [MSC v.1900 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> import socket
>>> server=socket.socket()
>>> socket.gethostbyname(socket.gethostname())
'127.0.0.1'
>>> server.bind(('127.0.0.1',5555))
>>> server.listen(1)
>>> c,addr=server.accept()
>>> c.send("hello".encode())
5
>>> c.send("socket programming".encode())
18
>>> c.send("hello")
Traceback (most recent call last):
  File "<pyshell#8>", line 1, in <module>
    c.send("hello")
TypeError: a bytes-like object is required, not 'str'
>>> c.send("hello".encode())
5
>>> c.recv(1024.decode())
SyntaxError: invalid syntax
>>> c.recv((1024).decode()
	   )
Traceback (most recent call last):
  File "<pyshell#12>", line 1, in <module>
    c.recv((1024).decode()
AttributeError: 'int' object has no attribute 'decode'
>>> c.recv(1024).decode()
	   
'msg from client'
>>> 
