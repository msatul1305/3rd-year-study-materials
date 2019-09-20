import java.net.*;			//Socket,ServerSocket
import java.io.*;			//DataInputStream,BufferedInputStream,IOException

public class Server{
	private Socket socket_var=null;
	private ServerSocket server_var=null;
	private DataInputStream in_var=null;
	public Server(int port){	// constructor with port passed through main()
	try{
	server_var=new ServerSocket(port);
	System.out.println("Server Started!");
	System.out.println("Waiting for a client..");
	socket_var=server_var.accept();
	System.out.println("Client Accepted");
	in_var=new DataInputStream(new BufferedInputStream(socket_var.getInputStream()));  //read primitive Java data types 
	String line_var="";
	while(!line_var.equals("Over")){
		try{
		line_var=in_var.readUTF();	//reads the string from client
		System.out.println(line_var);
		}
		catch(IOException i){
		System.out.println(i);
		}
	}
	System.out.println("Closing Connection!");
	socket_var.close();
	in_var.close();
		}
	catch(IOException i){
		System.out.println(i);
		}
	}
public static void main(String args[]){
	Server server=new Server(5000);
	}
}
