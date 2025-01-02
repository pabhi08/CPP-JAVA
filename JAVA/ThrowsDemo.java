class Demo
{
    public float Division(int no1,int no2)throws ArithmeticException
{
    return no1/no2;
}

}

class ThrowsDemo
{
    public static void main(String Arg[])
    {
         Demo obj =new Demo();
         float ret=0.0f;
         try
         {
            ret=obj.Division(11,0);
         }
         catch(ArithmeticException aobj)
         {
            System.out.println("Exception Occured");
         }         
         
         System.out.println(ret);
    }
}