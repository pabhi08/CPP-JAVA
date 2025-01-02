import java.util.*;

class Program44
{
       public static void printOdd(int x)
       {
        
         
            int sum=0;
            for(int i=1;i<=x;i++)
            {
                   if((i%2)!=0)
                   {
                   sum=sum+i ;
                  }
            } 
            System.out.println("Sum of odd number is :"+sum);
         
         
        return;
        
       }




    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int n1=sobj.nextInt();
    

        printOdd(n1);
          
    }
}