import java.util.*;

class Program26
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
            for(int j=1;j<=jCol;j++)
            {
                if((i==1)||(j==1)||(i==iRow)||(j==jCol))
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

