import java.io.*;
import java.net.*;

public class client{
	public static void main(String args[]) throws Exception{
		Socket s = new Socket("localhost",9999);
		
		System.out.println("Enter data");
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String str=br.readLine();
		
		OutputStreamWriter os=new OutputStreamWriter(s.getOutputStream());
		PrintWriter out=new PrintWriter(os);
		os.write(str);
		os.flush();
		s.close();
	}
}	