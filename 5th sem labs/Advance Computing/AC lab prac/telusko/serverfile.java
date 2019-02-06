import java.io.*;
import java.net.*;

public class serverfile{
	public static void main(String args[]) throws Exception{
		ServerSocket ss=new ServerSocket(9999);
		Socket s=ss.accept();
		System.out.println("Connection established");
		
		FileInputStream fr=new FileInputStream("C:\\Users\\Anuja Modi\\Desktop\\anujamodi.txt");
		byte[] b=new byte[2048];
		fr.read(b,0,b.length);
		OutputStream os=s.getOutputStream();
		System.out.println("File sent");
		os.write(b,0,b.length);
		os.flush();
	}
}	