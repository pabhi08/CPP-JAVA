import java.util.*;

class Program43
{
       public static void printAverage(int x,int y,int z)
       {
         
         int avg=(x+y+z)/3;
          System.out.println(avg);
          return;
        
       }




    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int n1=sobj.nextInt();
        int n2=sobj.nextInt();
        int n3=sobj.nextInt();

        printAverage(n1,n2,n3);
          
    }
}