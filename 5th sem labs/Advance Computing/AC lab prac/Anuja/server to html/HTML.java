import java.net.*;
import java.io.*;

public class HTML{
	public static void main(String[] args) throws IOException{
		ServerSocket serv=new ServerSocket(80);
		Socket cs=serv.accept();
		PrintWriter out=new PrintWriter(cs.getOutputStream(),true);
		BufferedReader in= new BufferedReader(new InputStreamReader(cs.getInputStream()));
		for(int i=0;i<8;i++)
			System.out.println(in.readLine());
		out.println("<html> <body> <p> HELLO ANUJA </p> </body> </html>");
		out.close();
		serv.close();
	}
}			
