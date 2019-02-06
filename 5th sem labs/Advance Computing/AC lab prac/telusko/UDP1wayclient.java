import java.net.*;
import java.io.*;

public class UDP1wayclient{
	public static void main(String args[]) throws Exception{
		DatagramSocket ds=new DatagramSocket();
		
		String str;
		
		while(true){
			System.out.println("enter data to be sent");
			BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
			str=br.readLine();
			
			byte[] b=new byte[1024];
			b=str.getBytes();
			InetAddress ia=InetAddress.getLocalHost();
			DatagramPacket dp=new DatagramPacket(b,b.length,ia,9999);
			ds.send(dp);
			
			if(str.equals("stop"))
				System.exit(0);
		}
	}
}	
	