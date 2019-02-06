import java.util.*;
import java.io.*;
import java.net.*;

public class Udpserver{
	public static void main(String[] args) throws IOException{
		System.out.println("Server Started");

		DatagramSocket ds = new DatagramSocket(6968);
		byte[] b1 = new byte[1024];
		DatagramPacket dp = new DatagramPacket(b1,b1.length);
		ds.receive(dp);

		String str = new String(dp.getData());
		System.out.println(str);

		ds.close();		
	}
}