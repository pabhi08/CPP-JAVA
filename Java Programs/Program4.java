import java.util.*;

class Program4
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        int a=sobj.nextInt();
        int b=sobj.nextInt();
        int sum=a+b;
        int diff=b-a;
        int mult=a*b;
        System.out.println(" sum :"+sum);
        System.out.println("difference :"+diff); 
        System.out.println("mult :"+mult);
    }
}