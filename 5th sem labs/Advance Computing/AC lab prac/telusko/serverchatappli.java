import java.io.*;
import java.net.*;

public class serverchatappli{
	public static void main(String args[]) throws Exception{
		System.out.println("Server has started");
		
		ServerSocket ss = new ServerSocket(9999);
		Socket s;
		System.out.println("Waiting for client");
		s=ss.accept();
		System.out.println("Client accepted");
		String str="";
		//accept data from client
		while(str!="stop"){
			BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
			str=br.readLine();
			System.out.println("client data: "+str);
			
			//to send data to client
			System.out.println("Enter string");
			br=new BufferedReader(new InputStreamReader(System.in));
			String str1=br.readLine();
			
			OutputStreamWriter os=new OutputStreamWriter(s.getOutputStream());
			PrintWriter out=new PrintWriter(os);
			out.println(str1);
			out.flush();
		}
		ss.close();
		System.out.println("Server ended");
	}
}