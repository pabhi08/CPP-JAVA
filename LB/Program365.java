//accept the string from user and count the no of freq

import java.util.*;

class Program365
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string :");
        String str=sobj.nextLine();

        str=str.toLowerCase();  //inbuilt method

        char Arr[]=str.toCharArray();

        int Freq[]=new int [26];
           int iCnt=0;
        for( iCnt=0;iCnt<Arr.length;iCnt++)
        {
              Freq[Arr[iCnt]-'a']++;
        }

        System.out.println("Frequency of each letter is :");
        for(iCnt=0;iCnt<Freq.length;iCnt++)
        {
            System.out.println("Frequency of  "+(char)(iCnt+'a')+"is :"+Freq[iCnt]);
        }

    }
}