import java.util.*;

class Program24
{
    public static void main(String args[])
    {
       Scanner sobj=new Scanner(System.in);

     System.out.print("enter the input :  ");
      int input=sobj.nextInt();
      
    if(input==1)
    {
       
        System.out.println("Enter the marks :");
          int marks=sobj.nextInt();
        do
        {
            if(marks>90)
            {
                System.out.println("This is good :");

            }
            else if(89 > marks > 60)
            {
                System.out.println("This is also good :");

            }
            else if(59 > marks > 0 )
            {
                 System.out.println("This is Good as well:");

            }
            else
            {
                System.out.print("Marks doesnt mattter but our effort does :");
            }

        }while(marks<100);

    }

    else if(input==0)
     {
       System.out.println("No need to calculate the marks");
    }
       
       else
       {
        System.out.println("Inavalid syntax");
       }
        
    }
}