/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *




 */

import java.util.*;

class Program35
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow=sobj.nextInt();

        
        System.out.println("Enter the number of columns :");
        int jCol=sobj.nextInt();

//upper half
        for(int i=1;i<=iRow;i++)
        {
           //first half
            for(int j=1;j<=i;j++)
            {
                 System.out.print("*");
            }
            
            //spaces
            int spaces=2*(iRow-i);
            for(int j=1;j<=spaces;j++)
            {
               System.out.print(" ");
            }

            //second half
            for(int j=1;j<=i;j++)
            {
                 System.out.print("*");
            }
            System.out.println(); 
         }


//lower half
 for(int i=iRow;i>=1;i--)
        {
           //first half
            for(int j=1;j<=i;j++)
            {
                 System.out.print("*");
            }
            
            //spaces
            int spaces=2*(iRow-i);
            for(int j=1;j<=spaces;j++)
            {
               System.out.print(" ");
            }

            //second half
            for(int j=1;j<=i;j++)
            {
                 System.out.print("*");
            }
            System.out.println(); 
         }











    }
 }

