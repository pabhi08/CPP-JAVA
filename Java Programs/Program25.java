import java.util.*;

class Program25
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number of rows :");
        int iRow= sobj.nextInt();

   System.out.println("Enter the number of columns :");
        int jCol= sobj.nextInt();

       
        for(iRow=1;iRow<=4;iRow++)
        {
            for(jCol=1;jCol<=4;jCol++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}