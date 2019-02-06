import java.util.*;
import java.net.*;
import java.io.*;

public class Client2{
	public static void main(String[] args) throws IOException{
		Scanner sc = new Scanner(System.in);
		System.out.println("Client Started");
		Socket s = new Socket("localhost",6968);
		OutputStreamWriter os = new OutputStreamWriter(s.getOutputStream());
		PrintWriter out = new PrintWriter(os);
		while(true){
			System.out.print("Enter msg:");
			String str = sc.nextLine();

			out.println(str);
			out.flush();
			if(str.equals("bye"))
				break;

			BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
			String str2 = br.readLine();
			System.out.println("Server says: "+str2);

			if(str2.equals("bye"))		
				break;
		}

		s.close();
	}
}