
/*
    ****
   ****
  ****  
 ****

 */

import java.util.*;

class Program36
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow=sobj.nextInt();

        System.out.println("Enter the number of columns :");
        int jCol=sobj.nextInt();

        for(int i=1;i<=iRow;i++)
        {
            //spaces
             int spaces=(iRow-i);
             for(int j=1;j<=spaces;j++)
            {
               System.out.print(" ");
            }
           //first half
            for(int j=1;j<=jCol;j++)
            {
                System.out.print("*");
            }
            
           System.out.println(); 
        }

    }

 }

