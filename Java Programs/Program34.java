/*
1
01
101
0101
 */



import java.util.*;

class Program34 
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow=sobj.nextInt();

        
        System.out.println("Enter the number of columns :");
        int jCol=sobj.nextInt();


        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=i;j++)
            {
                int sum=i+j;
              if(sum%2==0)
              {
                System.out.print("1");
              }
              else
              {
                System.out.print("0");
              }
            }
            System.out.println();
        }
    }
 }

