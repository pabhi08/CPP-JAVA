import java.util.*;

class HW9

{
    public static void main(String args[])
    {
       Scanner sobj=new Scanner(System.in);
    
         System.out.println("enter the size of array :");
         int size= sobj.nextInt();

          int arr[]=new int [size];  //dynamic creation of array

       System.out.println("enter the elements into the array :");
          for(int iCnt=0;iCnt<size;iCnt++)
          {
               arr[iCnt]=sobj.nextInt();
          }

       System.out.println(" elements of the array are :");
        for(int iCnt=0;iCnt<size;iCnt++)
          {
              System.out.println(arr[iCnt]); 
          }

       

            }
}