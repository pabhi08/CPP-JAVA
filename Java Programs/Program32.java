
import java.util.*;

class Program32
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
            for(int j=1;j<=iRow-i+1;j++)
            {
              System.out.print(j);
            }
            System.out.println();
        }
    }
 }

