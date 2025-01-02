import java.util.*;


class Program42
{
       public static void printFactorial(int n)
       {
        if(n<0)
        {
            System.out.print("INvalid Number");
            return;
        }

        int fact=1;
          for(int i=n;i>1;i--)
          {
              fact=fact*i;
          }
          System.out.println(fact);
          return;
        
       }


    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int n=sobj.nextInt();

        printFactorial(n);
          
    }
}