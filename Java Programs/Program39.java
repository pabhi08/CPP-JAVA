
/*
    diamond pattern problem
          *
         ***
        *****
       *******
       *******
        *****
         ***
          *
    

 */

import java.util.*;

class Program39
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow=sobj.nextInt();

        System.out.println("Enter the number of columns :");
        int jCol=sobj.nextInt();


      //first half
        for(int i=1;i<=iRow;i++)
        {
            //spaces
             int spaces=(iRow-i);
             for(int j=1;j<=spaces;j++)
            {
               System.out.print(" ");
            }

     
             int star=(2*i)-1;
            for(int j=1;j<=star;j++)
            {
                System.out.print("*");
               
            }
        System.out.println(); 
        }


//second  half
         for(int i=iRow;i>=1;i--)
        {
            //spaces
             int spaces=(iRow-i);
             for(int j=1;j<=spaces;j++)
            {
               System.out.print(" ");
            }

           
             int star=(2*i)-1;
            for(int j=1;j<=star;j++)
            {
                System.out.print("*");
               
            }
        System.out.println(); 
        }

    }

 }

