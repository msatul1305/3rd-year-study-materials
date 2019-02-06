import java.io.BufferedOutputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.net.Socket;

public class Main1 {
  public static void main(String[] argv) throws Exception {
    Socket sock = new Socket("172.27.1.3", 9999);
    byte[] mybytearray = new byte[500];
    InputStream is = sock.getInputStream();
    FileOutputStream fos = new FileOutputStream("/home/vssut/Desktop/Anuja/ac/anujaoutput.txt");
    BufferedOutputStream bos = new BufferedOutputStream(fos);
    int bytesRead = is.read(mybytearray, 0, mybytearray.length);
    bos.write(mybytearray, 0, bytesRead);
    bos.close();
    sock.close();
  }
}
