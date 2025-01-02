import java.util.*;
import java.io.*;


class Program507
{
   public static void main(String arg[]) throws Exception
   {
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter the file name that you want to create :");
       String FileName=sobj.nextLine();
 
      try
      {
       File fobj=new File(FileName);

      String name=fobj.getName();
      System.out.println("File length  is : "+fobj.length());
      
      }
      
      catch(Exception iobj )
      {
        System.out.println("Exception occured :"+iobj);
      }
   }
}