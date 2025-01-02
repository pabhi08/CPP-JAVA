import java.util.ArrayList;

//it is a process where primitive data types are converted into wrapp
class AutoBoxing
{
    public static void main(String args[])
    {
           char ch= 'a';
           Character a=ch;

           ArrayList<String> arraylist = new ArrayList<String> ();
           arraylist.add("hello");
           System.out.println(arraylist.get(0));

    }
}




/*
class Unboxing
public static void main(String args[])
    {
           char ch= 'a';
           Character a=ch;

           ArrayList<String> arraylist = new ArrayList<String> ();
           arraylist.add("hello");
           int num=arraylist.get(0);
           System.out.println(num);

    }


*/