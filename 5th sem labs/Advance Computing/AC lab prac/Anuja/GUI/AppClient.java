import java.awt.*;
import java.awt.event.*;

import java.io.*;
import java.net.*;
/**
 * @author Tapas
 * @mail tapas.friends@gmail.com
 * @blog tapas4web.blogspot.com
 */
public class AppClient extends Frame implements ActionListener,Runnable
{
 //Declarations
 Button b;
 TextField tf;
 TextArea ta;
 Socket s;
 PrintWriter pw;
 BufferedReader br;
 Thread th;
 
 public AppClient()
 {
  Frame f=new Frame("Client Side Chatting");//Frame for Client
  f.setLayout(new FlowLayout());//set layout
  f.setBackground(Color.orange);//set background color of the Frame
  b=new Button("Send");//Send Button
  b.addActionListener(this);//Add action listener to send button.
  f.addWindowListener(new W1());//add Window Listener to the Frame
  tf=new TextField(15);
  ta=new TextArea(12,20);
  ta.setBackground(Color.cyan);
  f.add(tf);//Add TextField to the frame
  f.add(b);//Add send Button to the frame
  f.add(ta);//Add TextArea to the frame
  try{
   s=new Socket(InetAddress.getLocalHost(),12001);//Socket for client
   //below line reads input from InputStreamReader
   br=new BufferedReader(new InputStreamReader(s.getInputStream()));
   //below line writes output to OutPutStream
   pw=new PrintWriter(s.getOutputStream(),true);
  }catch(Exception e)  
  {
  }
  th=new Thread(this);//start a new thread
  th.setDaemon(true);//set the thread as demon
  th.start();
  setFont(new Font("Arial",Font.BOLD,20));
  f.setSize(200,200);//set the size
  f.setVisible(true);
  f.setLocation(100,300);//set the location
  f.validate();
 }
 //method required to close the Frame on clicking "X" icon.
 private class W1 extends WindowAdapter
 {
  public void windowClosing(WindowEvent we)
  {
   System.exit(0);
  }
 }
 //This method will called after clicking on Send button.
 public void actionPerformed(ActionEvent ae)
 {
  pw.println(tf.getText());//write the value of textfield into PrintWriter
  tf.setText("");//clean the textfield
 }
 //Thread running as a process in background
 public void run()
 {
  while(true)
  {
   try{
    ta.append(br.readLine()+"\n");//Append to TextArea
   }catch(Exception e) {}
  }
 }
 //Main method
 public static void main(String args[])
 {
  //Instantiate AppClient class
  AppClient client = new AppClient();
 }
}
