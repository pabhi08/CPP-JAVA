import java.util.*;

class Program16
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the choice :");
        int choice=sobj.nextInt();

       

        switch(choice)
        {
            case 1 :
                System.out.print("January");
                
                break;

                case 2 :
                System.out.print("february ");
             
                break;

                 case 3 :
                System.out.print("March");
              
                break;

                 case 4 :
                System.out.print("april ");
               
                break;

                 case 5 :
                System.out.print("may ");
                 break;

                  case 6 :
                System.out.print("june ");
                 break;

                  case 7 :
                System.out.print("july ");
                 break;

                  case 8 :
                System.out.print("august ");
                 break;

                  case 9 :
                System.out.print("september ");
                 break;

                  case 10 :
                System.out.print("october ");
                 break;

                  case 11 :
                System.out.print("November ");
                 break;

                  case 12 :
                System.out.print("December ");
                 break;

              default :
              System.out.print("Invalid! NOt allowed ");
              break;


        }


    }
}