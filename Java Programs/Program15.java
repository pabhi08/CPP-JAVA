import java.util.*;

class Program15
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the choice :");
        int choice=sobj.nextInt();

       System.out.println("Enter the first number :"); 
        int a=sobj.nextInt();

        System.out.println("Enter the second number :"); 
        int b=sobj.nextInt();

        switch(choice)
        {
            case 1 :
                System.out.print("Addition of two numbers is : ");
                System.out.print(a+b);
                break;

                case 2 :
                System.out.print("Substraction  of two numbers is : ");
                System.out.print(a-b);
                break;

                 case 3 :
                System.out.print("Multiplication of two numbers is : ");
                System.out.print(a*b);
                break;

                 case 4 :
                System.out.print("Division of two numbers is : ");
                System.out.print(a/b);
                break;

                 case 5 :
                System.out.print("Remainder of two numbers is : ");
                System.out.print(a%b);
                break;

              default :
              System.out.print("Invalid! NOt allowed ");
              break;


        }


    }
}