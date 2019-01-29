import java.io.*;
import java.net.*;
class ser 
{
	ServerSocket ss;
	Socket s;
	BufferedReader br;
	PrintStream ps;
	ser() throws IOException {
		ss=new ServerSocket(80);
		s=ss.accept();
		br=new BufferedReader(new InputStreamReader(s.getInputStream()));
		ps=new PrintStream(s.getOutputStream(),true);
		for(int i=0;i<8;i++)
			System.out.println(br.readLine());
		ps.println("<html><body>hello</body></html>");
		ps.close();
	}
	public static void main(String a[] )throws IOException{
		new ser();
	}
}