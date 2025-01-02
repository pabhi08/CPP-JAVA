///GCD///

import java.util.*;

class Program50
{
       public static void CalculateGcd(int x,int y)
       {
        while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
            System.out.println("GCD : "+x);
        }
        else 
        {
            y=y-x;
            System.out.println("GCD : "+y);
        }
    }  
    
       return;
        
       }

    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int n1=sobj.nextInt();
           int n2=sobj.nextInt();

         CalculateGcd(n1,n2);
          
    }
}