import java.net.*;
import java.io.*;
public class Client
{
	private Socket socket_var=null;
	private DataInputStream input_var=null;
	private DataOutputStream out_var=null;
	
	public Client(String address_input,int port_input){
		try{
		socket_var=new Socket(address_input,port_input);	//why both address and port here but in server only port??
		System.out.println("Connected");
		input_var=new DataInputStream(System.in);
		out_var=new DataOutputStream(socket_var.getOutputStream());
		}
		catch(UnknownHostException u){
			System.out.println(u);
			}
		catch(IOException i){
			System.out.println(i);
			}
			
		String line_input="";
		while(!line_input.equals("Over")){
			try{
			line_input=input_var.readLine();	//read input string from user
			out_var.writeUTF(line_input);		//send it to server
			}
			catch(IOException i){
				System.out.println(i);
				}
			}
			try{
				input_var.close();
				out_var.close();			
				socket_var.close();
			}
			catch(IOException i){
				System.out.println(i);
				}
	}
	public static void main(String args[]){
		Client client_var=new Client("127.0.0.1",5000);
		}
}
