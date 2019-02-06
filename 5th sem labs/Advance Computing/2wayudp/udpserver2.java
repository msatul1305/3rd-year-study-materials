import java.util.*;
import java.io.*;
import java.net.*;

public class udpserver2{
	public static void main(String[] args) throws IOException{
		DatagramSocket ds = new DatagramSocket(6968);
		System.out.println("Server Started");

		byte[] br = new byte[2048];

		DatagramPacket dp = new DatagramPacket(br,br.length);
		ds.receive(dp);

		String msg = new String(dp.getData());

		System.out.println(msg);

		System.out.println("Reply to client:");
		Scanner sc = new Scanner(System.in);
		String reply = sc.nextLine();

		byte[] rep = reply.getBytes();
		InetAddress ia = InetAddress.getLocalHost();
		DatagramPacket dp1 = new DatagramPacket(rep,rep.length,ia,dp.getPort());
		ds.send(dp1);
		ds.close();
		
	}
}