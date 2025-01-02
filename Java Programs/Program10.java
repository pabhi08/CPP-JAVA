import java.util.*;

class Program10
{
    public static void main(String args[])
    {
         Scanner sobj=new Scanner(System.in);
         System.out.print("Enter the age :");
         int age =sobj.nextInt();

         if(age>18)
         {
            System.out.print("user is adult");
         }
         else
         {
            System.out.print("Not adult"); 
         }
    }
}