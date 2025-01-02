import java.util.*;

class Program45
{
       public static void printGreater(int x,int y)
       {
        if(x>y)
        {
            System.out.println("No1 is greater than No2 ");
        }
        else
        {
             System.out.println("No2 is greater than No1 ");
        }
         
       return;
        
       }




    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int n1=sobj.nextInt();
         int n2=sobj.nextInt();
    

        printGreater(n1,n2);
          
    }
}