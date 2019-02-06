import java.io.*;
import java.net.*;

public class clientchatappli{
	public static void main(String args[]) throws Exception{
		Socket s = new Socket("localhost",9999);
		String str1="";
		while(str1!="stop"){
			System.out.println("Enter data");
			BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
			String str=br.readLine();
			
			OutputStreamWriter os=new OutputStreamWriter(s.getOutputStream());
			PrintWriter out=new PrintWriter(os);
			out.println(str);
			out.flush();
			
			
			//accept data from server
			br=new BufferedReader(new InputStreamReader(s.getInputStream()));
			str1=br.readLine();
			System.out.println("server data: "+str1);
		}
		
		s.close();
	}
}