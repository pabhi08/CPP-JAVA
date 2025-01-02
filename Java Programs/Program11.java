import java.util.*;

class Program11
{
    public static void main(String args[])
    {
         Scanner sobj=new Scanner(System.in);
          System.out.println("Enter the number");
         int n =sobj.nextInt();

         if(n%2==0)
         {
            System.out.print("even number");
         }
         else
         {
            System.out.print("odd number"); 
         }
    }
}