import java.net.*;
import java.io.*;

public class HTML1{
	public static void main(String[] args) throws IOException{
		ServerSocket servsock = new ServerSocket(80);

		Socket cs = servsock.accept();
		PrintWriter out = new PrintWriter(cs.getOutputStream(),true);
		BufferedReader in = new BufferedReader(new InputStreamReader(cs.getInputStream()));
		for(int i = 0;i < 8;i++)
			System.out.println(in.readLine());
		String cse = "<!DOCTYPE html><html><head><title>WELCOME</title></head><p>Welcome to Cse</p><a href=\"home.html\">Goto HOME</a><br><a href=\"pro.html\">Goto PRO<a><br><a href=\"elec.html\">Goto ELEC</a><body></body></html>";
		String pro = "<!DOCTYPE html><html><head><title>WELCOME</title></head><p>Welcome to Production</p><a href=\"home.html\">Goto HOME</a><br><a href=\"elec.html\">Goto ELEC<a><br><a href=\"cse.html\">Goto CSE</a><body></body></html> ";
		String elec = "<!DOCTYPE html><html><head><title>WELCOME</title></head><p>Welcome to Electrical</p><a href=\"home.html\">Goto HOME</a><br><a href=\"pro.html\">Goto PRO<a><br><a href=\"cse.html\">Goto CSE</a><body></body></html> ";
		String home = "<!DOCTYPE html><html><head><title>WELCOME</title></head><p>HELLO roam around departments with Goto :)</p><a href=\"cse.html\">Goto CSE</a><br><a href=\"pro.html\">Goto PRO<a><br><a href=\"elec.html\">Goto ELEC</a><body></body></html> ";
		String link = home;
		boolean flag = true;
		while(flag){
			out.println(link);
			out.close();
			cs = servsock.accept();
			out = new PrintWriter(cs.getOutputStream(),true);
			in = new BufferedReader(new InputStreamReader(cs.getInputStream()));
			String temp = in.readLine();
			System.out.println(temp);
			for(int i = 0;i < 7;i++)
					System.out.println(in.readLine());
			try{
				link = temp.replaceAll("GET /(.*).html HTTP(.*)", "$1");
				//System.out.println(">>>>>>>>>>>>>>>>>>>>>>>>>>>"+link+"<<<<<<<<<<<<<<<<<<<<<");
				switch(link){
					case "home":
						link = home;
						break;
					case "cse":
						link = cse;
						break;
					case "pro":
						link = pro;
						break;
					case "elec":
						link = elec;
						break;
				}
			}catch(Exception e){
				System.out.println("Exception caught with request as:" + temp);
				flag = false;
			}
		}
		servsock.close();
	}
}
