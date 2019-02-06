import java.util.*;
import java.net.*;
import java.io.*;

public class Client{
	public static void main(String args[]) throws IOException{
		Scanner sc = new Scanner(System.in);
		Socket s = new Socket("localhost",6060);
		//To send message
		//OutputStreamWriter os=new OutputStreamWriter(s.getOutputStream());
		PrintWriter out=new PrintWriter(s.getOutputStream());

		System.out.print("Enter msg:");
		String str = sc.nextLine();
		out.write(str);
		out.flush();
		s.close();
	}
}
