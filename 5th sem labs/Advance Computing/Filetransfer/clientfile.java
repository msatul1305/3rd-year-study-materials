import java.util.*;
import java.net.*;
import java.io.*;

public class clientfile{
	public static void main(String[] args) throws Exception{
		Socket s = new Socket("localhost",6968);
		byte[] b = new byte[2048];


		InputStream is = s.getInputStream();
		FileOutputStream fos = new FileOutputStream("/home/agrawalankit/Desktop/LABANKIT/AC34CSE/received.cpp");
		int size = is.read(b,0,b.length);	//get iput from s into byte array b
		fos.write(b,0,size);

		System.out.println("Successful!");
		s.close();

	}
}