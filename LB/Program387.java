
import java.util.*;


class Matrix
{
   public int Arr[][];

   public Matrix(int i ,int j)
   {
    Arr=new int [i][j];
   }
   
   


}

class Program387
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iRow=0;
        int iCol=0;

        System.out.println("Enter no of rows");
        iRow=sobj.nextInt();

        System.out.println("Enter no of coloumn");
        iCol=sobj.nextInt();

        Matrix mobj=new Matrix(iRow,iCol);
                
    }
}