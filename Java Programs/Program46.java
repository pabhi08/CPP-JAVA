import java.util.*;

class Program46
{
       public static void printCircumference(int radius)
       {
           double circumference =2*3.14*radius;
           System.out.println("circumference is :"+circumference);

       return;
        
       }

    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int n1=sobj.nextInt();

         printCircumference(n1);
          
    }
}