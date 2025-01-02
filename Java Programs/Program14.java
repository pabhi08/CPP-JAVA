import java.util.*;

class Program14
{
    public static void main(String args[])
    {
         Scanner sobj=new Scanner(System.in);
          System.out.println("Enter the choice :l");
         int choice =sobj.nextInt();

         switch(choice)
         {
            case 1 :
            System.out.println("Hello");
            break;

            case 2 :
            System.out.println("Namaste"); 
            break;

            case 3 :
             System.out.println("Bonjour(hello in french)");  
            break;

            default :
            System.out.println("Invalid format");
        }  


    }

}
