import java.util.*;

class Program13
{
    public static void main(String args[])
    {
         Scanner sobj=new Scanner(System.in);
          System.out.println("Enter the number");
         int button =sobj.nextInt();
         if(button==1)
         {
            System.out.println("Hello");
        }
         else if (button==2)
         {
           System.out.println("Namaste");  
         }
         else if (button==3)
         {
           System.out.println("Bonjour(hello in french)");  
         }
         else
         {
            System.out.println("Invalid format");
         }


         
    }
}