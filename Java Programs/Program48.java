import java.util.*;

class Program48
{

    public static void main(String args[])
    {
           Scanner sobj= new Scanner(System.in);
           int iCnt1=0,iCnt2=0,iCnt3=0;
        System.out.println("1 to continue and 0 to stop");
       int input=sobj.nextInt();
       while(input==1)
       {
          System.out.println("Enter the numbers :");
          int numbers=sobj.nextInt();

          if(numbers>0)
          {
           iCnt1++;
          }
          else if(numbers<0)
          {
             iCnt2++;
 
          }
          else
          {
            iCnt3++;
          }
          

           System.out.println("Press 1 to continue & 0 to stop");
           input = sobj.nextInt();
       }

     System.out.println("Positive are :"+iCnt1);
       System.out.println("Negatrive are :"+iCnt2);
         System.out.println("Zeros  are :"+iCnt3);
      

      
     
          
    }
}