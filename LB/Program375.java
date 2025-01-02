//take a string from user and find the count the no of words india is used

import java.util.*;

class Program375
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string :");
        String str=sobj.nextLine();
  
       str=str.trim();
        str=str.replaceAll("\\s+"," ");

        String arr[]=str.split(" ");
       int iFrequency=0;
       for(int iCnt=0;iCnt<arr.length;iCnt++)
       {
            if(s.equals("india"))
            {
                iFrequency++;
            }

       }
       System.out.println("Frequency of india  word is :"+iFrequency);


    }

      
}