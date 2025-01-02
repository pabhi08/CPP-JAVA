import java.util.*;



class Program40
{
       public static void printMyName(String name)
       {
        System.out.println(name);
        return;
       }


    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        String name=sobj.next();

        printMyName(name);
          
    }
}