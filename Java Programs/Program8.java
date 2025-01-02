import java.util.*;

class Program8
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int rem,rev=0;

        System.out.println("Enter the number you want to reverse :");
        int n = sobj.nextInt();

        while(n!=0)
        {
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
         }
          System.out.print(rev);                       


    }
}