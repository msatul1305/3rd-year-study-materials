import java.util.*;
import java.io.*;
import java.net.*;

public class udpclient2{
	public static void main(String[] args) throws IOException{
		System.out.println("Client Started...");

		DatagramSocket ds = new DatagramSocket();
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter msg:");
		String msg = sc.nextLine();

		byte[] br = msg.getBytes();

		InetAddress ia = InetAddress.getLocalHost();
		DatagramPacket dp = new DatagramPacket(br,br.length,ia,6968);

		ds.send(dp);

		byte[] b = new byte[2048];
		DatagramPacket dp1 = new DatagramPacket(b,b.length);
		ds.receive(dp1);

		String str = new String(dp1.getData());
		System.out.println("Server says: "+str);

		ds.close();
		
	}
}