import java.util.*;

class Program12
{
    public static void main(String args[])
    {
         Scanner sobj=new Scanner(System.in);
          System.out.println("Enter the number");
         int a =sobj.nextInt();
         int b=sobj.nextInt();

         if(a==b)
         {
            System.out.print("both are equal");
         }
         else if(a>b)
         {
            System.out.print(" a is greater than b"); 
         }
         else
         {
            System.out.print("b is greater than a ");
         }
    }
}