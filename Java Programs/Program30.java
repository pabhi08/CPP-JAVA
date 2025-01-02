import java.util.*;

class Program30
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow=sobj.nextInt();

        
        System.out.println("Enter the number of columns :");
        int jCol=sobj.nextInt();

        for(int i=iRow;i>=1;i--)
        {
            for(int j=jCol;j>=1;j--)
            {
                if((i==j)||(i>j)) 
                {
                System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
 }

