//convert upper to lower char
import java.util.*;

class StringX
{
    
    public String StrLower(String str)
    {
       //step 1 : convert string to array 
       char Arr[]=str.toCharArray();

       //step2 : Perform operations on array
       for(int iCnt=0;iCnt<Arr.length;iCnt++)
       {
        if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
        {
          Arr[iCnt]=(char)(Arr[iCnt]+32);   //explicit type casting
        }
       } 

       //step 3 :convert array to string
       String ret=new String (Arr);

       return ret;   
    }
    
}

class Program357
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

       System.out.println("Enter your name :");
       String name=sobj.nextLine();

      StringX obj=new StringX();
      
      String sret=obj.StrLower(name);
      System.out.println("Converted string is :"+sret);
   }
}