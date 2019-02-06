import java.net.*;
import java.io.*;

public class UDP1wayserver{
	public static void main(String args[]) throws Exception{
		DatagramSocket ds=new DatagramSocket(9999);
		System.out.println("Server started");
		
		while(true){
			byte[] b=new byte[1024];
				
			DatagramPacket dp=new DatagramPacket(b,b.length);
			ds.receive(dp);
			
			String str=new String(dp.getData());
			System.out.println("client data is: "+str);
			
			if(str.equals("stop")){
				System.out.println("server ended");
				System.exit(0);
			}	
		}	
	}
}	