import java.util.*;
import java.net.*;
import java.io.*;

public class Server{
	public static void main(String args[]) throws IOException{
		ServerSocket ss = new ServerSocket(6060);
		Socket s;
		String str;
		System.out.println("Server listening to port 6969\nWaiting for client...");
		s = ss.accept();
		System.out.println("Client Accepted!");
		//To get message
		BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
		str = br.readLine();
		
		System.out.println("Client says: " + str);	
		ss.close();
	}
}