import java.util.*;


class Arithematic
{
   public int no1;
    public int no2;

    public Arithematic()
    {
        this.no1=0;
        this.no2=0;
    }

    public Arithematic(int i,int j)
    {
         this.no1=i;
         this.no2=j;
    }

    public int  Addition()
    {
        int sum=0;
        sum=this.no1+this.no2;
        return sum;
    }

    public int  Substraction()
    {
        int diff=0;
        diff=this.no2-this.no1;
        return diff;
    }

    public int multiplication()
    {
        int mult=0;
        mult=this.no1*this.no2;
        return mult;
    }

    
}

class Program5
{
    public static void main(String args[])
    {
        Arithematic obj1=new Arithematic();        //default constructor 
        Arithematic obj2=new Arithematic(12,23);    //parameterised constructor 

        int iRet=0;

        iRet=obj1.Addition();
        System.out.println("Summation is :"+iRet);

        iRet=obj1.Substraction();
        System.out.println("Difference  is :"+iRet);

          iRet=obj2.Addition();
        System.out.println("Summation is :"+iRet);

        iRet=obj2.Substraction();
        System.out.println("Difference  is :"+iRet);

         iRet=obj1.multiplication();
        System.out.println("multiplication is :"+iRet);

        iRet=obj2.multiplication();
        System.out.println("multiplication   is :"+iRet);

        
    }
}