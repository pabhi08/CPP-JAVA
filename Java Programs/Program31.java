/*
1
12
123
1234
 */




import java.util.*; 

class Program31
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
               System.out.print(j);
            }
            System.out.println();
        }
    }
 }

