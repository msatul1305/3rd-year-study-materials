import java.util.*;
import java.io.*;
import java.net.*;

public class serverfile{
	public static void main(String[] args) throws IOException{
		ServerSocket ss = new ServerSocket(6968);
		System.out.println("Server running,Waiting for client...");
		Socket s = ss.accept();
		System.out.println("Client Accepted,sending file...");
		byte b[] = new byte[2048];

		FileInputStream fis = new FileInputStream("/home/agrawalankit/Desktop/LABANKIT/AC34CSE/newFile.cpp");
		OutputStream os = s.getOutputStream();
		int size = fis.read(b,0,b.length);
		os.write(b,0,size);
		s.close();
	}
}