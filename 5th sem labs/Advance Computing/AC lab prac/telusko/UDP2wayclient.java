import java.net.*;
import java.io.*;

public class UDP2wayclient{
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
			
			//receive from server
			
			byte[] bre=new byte[1024];
				
			DatagramPacket dp1=new DatagramPacket(bre,bre.length);
			ds.receive(dp1);
			
			String str1=new String(dp1.getData());
			System.out.println("client data is: "+str1);
			
			if(str.equals("stop") || str1.equals("stop")){
				System.out.println("client ended");
				System.exit(0);
			}	
		}
	}
}	
	