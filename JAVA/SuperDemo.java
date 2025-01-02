
class Base
{
public int A;

public Base()
{
    System.out.println("Inside Base  default Constructor");
     this.A=11;
   
}


public Base(int i)
{
    System.out.println("Inside Base paramterised Constructor");
     this.A=i;
   
}

public void fun()
{
    System.out.println("Inside base fun");
}

}

class Derived extends Base     //class Derived : public base
{
public int A;

public Derived()
{
    super(11);         //3
    System.out.println("Inside Derived constructor");
   this.A=51;
  
}

public void gun()
{
    System.out.println("Inside Derived gun");
    System.out.println("Value of A :"+super.A);   //1
    System.out.println("Value of A :"+this.A);   
    super.fun();  //2

}

}

class SuperDemo
{
public static void main(String Arg[])
{
Derived dobj=new Derived();          //NO casting
dobj.gun();

System.out.println(dobj.A);
System.out.println(dobj.A);

}
}

//Use of super keyword in java :
// 1.Access the Data from parent from child
// 2.call method of parent from child
// 3.Call constructor of parent from child