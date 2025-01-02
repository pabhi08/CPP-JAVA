import java.util.*;


class Program53
{
     public static void Maximum(int[] Arr,int length)
     {
         int iMax=Arr[0];
         int iCnt=0;
         for( iCnt=0;iCnt<length;iCnt++)
         {
            iMax=Arr[iCnt];
         }
        System.out.println(iMax);

     }

    public static void main(String args[])
    {
       
       int arr[]=new int [size]; //this will allocate the memory to the array 
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array :");
        int size=sobj.nextInt();

    
         System.out.println("Enter the elements in the array :");
        for(int i=0;i<=size;i++)
        {
            
           arr[i]=sobj.nextInt();
        }

        Maximum(arr[],size);
    }
}