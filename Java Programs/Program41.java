import java.util.*;

class Arithmetic
{
    public int x;
    public int y;

    public int Addition(int x,int y)
       {
        int sum= x+y;
      return sum;
       }

        public int Substraction(int x,int y)
       {
        int sum= x-y;
        return sum;
       }

        public int Mult(int x,int y)
       {
        int mul = x*y;
        return mul;
       }



}


class Program41
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
      Arithmetic obj1=new Arithmetic();

        System.out.println("enter the 1 no :");
        int a=sobj.nextInt();

        System.out.println("enter the 2 no :");
        int b=sobj.nextInt();

        int iRet= obj1.Addition(a,b);
        System.out.println("Sum of two numbers is :"+iRet);

          iRet= obj1.Substraction(a,b);
        System.out.println("diff is :"+iRet);

        iRet= obj1.Mult(a,b);
        System.out.println("product is :"+iRet);

          
    }
}