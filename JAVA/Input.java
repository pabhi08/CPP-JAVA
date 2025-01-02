import java.util.*;

class Input
{
public static void main(String Arg[])
{
    Scanner sobj= new Scanner(System.in);
    System.out.println("Enter the first number");
    int ino1=sobj.nextInt();

    System.out.println("Enter the Second number");
    int ino2=sobj.nextInt();

   int iAns=0;
   iAns=ino1+ino2;
   System.out.println("Addition is :"+iAns);

}

}

/* 
Data type     Method from Scanner Class

boolean       nextBoolean();
short         nextShort();
integer       nextInteger();
float         nextFloat();
double        nextLong();
string        nextLine()
*/