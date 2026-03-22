import javax.swing.*;

public class Button
{
   public static void main(String[] args)
    {
       JFrame f=new JFrame("Frame1");
       JLabel l=new JLabel("label1");
       JTextField t= new JTextField("text1");
       JButton b=new JButton("Click");
       JRadioButton r1=new JRadioButton("MALE");
       JRadioButton r2=new JRadioButton("FE MALE");
       JRadioButton r3=new JRadioButton("OTHER");
       l.setBounds(45,95,100,30);
       t.setBounds(135,110,100,30);
       b.setBounds(140,145,95,30);
       r1.setBounds(75,50,100,30);
       r2.setBounds(75,100,100,30);
       r3.setBounds(75,150,100,30);
       ButtonGroup bg=new ButtonGroup();
       bg.add(r1);bg.add(r2);bg.add(r3);
       f.add(r1);f.add(r2);f.add(r3);
       //f.add(l);f.add(t);f.add(b);
       JCheckBox c1=new JCheckBox("CRICKET");
       JCheckBox c2=new JCheckBox("FOOT BALL");
       JCheckBox c3=new JCheckBox("TABLE TENNIS");
       c1.setBounds(200,200,100,30);
       c2.setBounds(200,250,100,30);
       c3.setBounds(200,300,100,30);
       f.add(c1);f.add(c2);f.add(c3);
       f.setSize(400,400);
       f.setLayout(null);
       f.setVisible(true);
   }
}