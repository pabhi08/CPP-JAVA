import java.util.*;



class Parent
{
    public int x;
    public float y;

    Parent()
    {
        this.x=30;
        this.y=4.6f;
    }

    void fun()
    {
        System.out.println("This is fun");
    }

     
}

class Child extends Parent
{
    public int s;
    public float a;

    Child()
    {
        this.s=4;
        this.y=25.6f;
    }

    final void sun()
    {
        System.out.println("This is sun");
    }

     
}

//this program will not run in this condition as the compiler says cannot find main method so as to run the program we need to write the main program above the all
class HW10
{
    public static void main(String args[])
    {
        Child c=new Child();
        c.fun();
        c.sun();
        System.out.println(c.x);

    }
}

