

import java.util.*;

class Program51
{
       public static void Fibonacci(int x)
       {
        int a=0;
        int b=1;

        System.out.print(a+" ");

         for(int i=1;i<x;i++)
         {
            System.out.print(b+" ");

            int temp=b;
            b=a+b;
            a=temp;
            
         }
         System.out.println();
    
       return;
        
       }

    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int n1=sobj.nextInt();
          

         Fibonacci(n1);
          
    }
}