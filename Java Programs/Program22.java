import java.util.*;

class Program22
{
    public static void main(String args[])
    {
       Scanner sobj=new Scanner(System.in);

     System.out.print("enter the number and its table will be printed : ");
      int n=sobj.nextInt();
      
       for(int i=1;i<11;i++)
       {
          
        System.out.println(n*i);
           
       }
       
        
    }
}