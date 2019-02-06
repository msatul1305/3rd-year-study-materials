import java.util.*;
import java.io.*;
import java.net.*;

public class UdpClient{
	public static void main(String[] args) throws IOException{
		Scanner sc = new Scanner(System.in);
		DatagramSocket ds = new DatagramSocket();

		System.out.println("Client Started.");
		System.out.print("Enter msg:");
		String msg = sc.nextLine();
		byte[] ba = msg.getBytes();

		InetAddress ia = InetAddress.getLocalHost();
		DatagramPacket dp = new DatagramPacket(ba,ba.length,ia,6968);

		ds.send(dp);
		ds.close();

	}
}