import java.util.Scanner;

class ExceptionDemoX
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int no1=0, no2=0; 
        float Ans=0.0f;

       System.out.println("Enter first number :");
       no1=sobj.nextInt();

       
       System.out.println("Enter second number :");
       no2=sobj.nextInt();

       try
       {
        System.out.println("Inside the try block");
        Ans = no1/no2; 
       }
       catch(ArithmeticException obj)
       {
          System.out.println("Exception is occured & code is inside catch block :"+obj);
       }
       finally
       {
        System.out.println("Exception  is inside finally block ");
         System.out.println("Division is :" +Ans);
        
       }
  
    }
}