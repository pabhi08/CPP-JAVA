import java.util.*;
import java.io.*;


class Program517
{
   public static void main(String arg[]) throws Exception
   {
       Scanner sobj=new Scanner(System.in);
         byte Header[]=new byte[100];
        
   System.out.println("--------------Marvellous Packer Unpacker-------------");
    System.out.println("UnPacking activity of application has started..");

     
      System.out.println("Enter the file name which contains the packed data :");
      String PackFile=sobj.nextLine();

     try
        {
         File Packobj=new File(PackFile);

          FileInputStream inobj=new FileInputStream(Packobj);

           inobj.read(Header,0,100);
          String  HeaderStr =new String(Header);
          System.out.println(HeaderStr); 

       }
       catch(Exception obj)
       {
        System.out.println("Exception occured :"+obj);
       }
   }
}