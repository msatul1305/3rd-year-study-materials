import java.util.*;
import java.net.*;
import java.io.*;

public class Server2{
	public static void main(String[] args) throws IOException{
		Scanner sc = new Scanner(System.in);
		System.out.println("Server started,listening to port 6968.");
		System.out.println("Waiting for client...");
		ServerSocket ss = new ServerSocket(6968);

		Socket s = ss.accept();
		System.out.println("Client connected!");
		BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
		while(true){
			String msg = br.readLine();

			System.out.println("Client says: "+msg);
			if(msg.equals("bye"))
				break;
			OutputStreamWriter os = new OutputStreamWriter(s.getOutputStream());
			PrintWriter out = new PrintWriter(os);

			System.out.print("Enter reply to client:");
			String str = sc.nextLine();
			out.println(str);
			out.flush();

			if(str.equals("bye"))
				break;
		}

		s.close();
		
	}
}