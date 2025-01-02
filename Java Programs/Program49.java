import java.util.*;

class Program49
{
       public static void CalculatePower(int x,int n)
       {
        int value=1;
           for(int i=1;i<=n;i++)
           {
                  value=value*x;
           }  
           System.out.println("Value is :"+pow);
       return;
        
       }

    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int x=sobj.nextInt();
           int n=sobj.nextInt();
         CalculatePower(x,n);
          
    }
}