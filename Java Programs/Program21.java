import java.util.*;

class Program21
{
    public static void main(String args[])
    {
       Scanner sobj=new Scanner(System.in);

      int n=sobj.nextInt();
      
      int sum=0;

       for(int i=1;i<=n;i++)
       {
          
          sum=sum+i;
           
       }
       System.out.print(sum);
        
    }
}