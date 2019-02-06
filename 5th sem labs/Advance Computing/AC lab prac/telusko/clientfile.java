import java.io.*;
import java.net.*;

public class clientfile{
	public static void main(String args[]) throws Exception{
		Socket s=new Socket("localhost",9999);
		InputStream is=s.getInputStream();
		FileOutputStream fr=new FileOutputStream("C:\\Users\\Anuja Modi\\Desktop\\a.txt");
		byte[] b=new byte[2048];
		is.read(b,0,b.length);
		fr.write(b,0,b.length);
	}
}	
	