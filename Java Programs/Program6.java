import java.util.*;

class Program6
{
    public static void main(String args[])
    {
          Scanner sobj=new Scanner(System.in);

          System.out.println("Enter the number of row :");
          int iRow=sobj.nextInt();

          System.out.println("Enter the number of column :");
          int jCol=sobj.nextInt();

            for(int i=1;i<=iRow;i++)
            {
                for(int j=1;j<=jCol;j++)
                {
                    
                 if((i==j)||(i>j))
                 {
                    System.out.print("* ");
                 } 
                 else
                 {
                    System.out.print("  ");
                 }

                }
                System.out.println();
            }

    }
}