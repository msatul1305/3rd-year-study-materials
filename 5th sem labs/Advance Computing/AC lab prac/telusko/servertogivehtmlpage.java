import java.io.*;
import java.net.*;

public class servertogivehtmlpage{
	public static void main(String args[]) throws Exception{
		ServerSocket ss=new ServerSocket(80);
		Socket s=ss.accept();
		System.out.println("Connection established");
		PrintWriter out=new PrintWriter(s.getOutputStream());
		
		//BufferedReader br=new BufferedReader(new InputStreamReader());
		out.println("<html> <body> <p> hello anuja </p> </body> </html>");
		
		System.out.println("Written in html page");
		out.close();
		ss.close();
	}
}	