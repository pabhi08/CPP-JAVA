
class Arithematic
{
    public int no1;
    public int no2;

    public Arithematic()    //Default constructor
    {
        System.out.println("Inside Default constructor");
      this.no1=0;
      this.no2=0;
    }

    public Arithematic(int i,int j)   //parametrised constructor
    {
        System.out.println("Inside parameterised constructor");
       this.no1=i;
       this.no2=j;

    }

    public int Addition()
    {
        int Ans=0;
        Ans=this.no1+this.no2;
        return Ans;
    }

    public int Substraction()
    {
        int Ans=0;
        Ans=this.no1-this.no2;
        return Ans;
    }

   public int Multiplication()
   {
       int Ans=0;
       Ans=this.no1*this.no2;
       return Ans;

   }


}


class OOP
{

    public static void main (String Arg[])
    {
        System.out.println("Inside main function");
    
        Arithematic obj1=new Arithematic();
        Arithematic obj2=new Arithematic(11,21);
    
        int iRet=0;

        iRet=obj1.Addition();
        System.out.println("Addition is :" +iRet);
         
        iRet=obj1.Substraction();
        System.out.println("Substraction is :"+iRet);

        iRet=obj2.Addition();
        System.out.println("Addition is :"+iRet);

        iRet=obj2.Substraction();
        System.out.println("Substraction is :"+iRet);

        
        iRet=obj1.Multiplication();
        System.out.println("Mutltiplication is :" +iRet);

       
        iRet=obj2.Multiplication();
        System.out.println("Multiplication is :" +iRet);



    }
}

