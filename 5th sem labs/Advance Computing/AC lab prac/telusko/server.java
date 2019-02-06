import java.io.*;
import java.net.*;

public class server{
	public static void main(String args[]) throws Exception{
		System.out.println("Server has started");
		
		ServerSocket ss = new ServerSocket(9999);
		Socket s;
		System.out.println("Waiting for client");
		s=ss.accept();
		System.out.println("Client accepted");
		
		BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
		String str=br.readLine();
		System.out.println("client data: "+str);
		ss.close();
		System.out.println("Server ended");
	}
}