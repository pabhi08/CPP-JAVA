class Generic2
{
    public static<T> void Display(T Arr[])
    {
        for(T no: Arr)    //foreach
        {
            System.out.println(no);
        }

      
    }
    
    public static void main(String Arg[])
    {
       Integer A[]={10,20,30,40};
       Float B[]={50.5f,60.3f,70.5f,};
       Double C[]={50.45,65.44,67.76};

       Display(A);
       Display(B);
       Display(C);

    }
}