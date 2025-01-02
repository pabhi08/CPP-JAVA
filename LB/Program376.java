import java.util.*;

class Program376
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string :");
        String str=sobj.nextLine();
  
       str=str.trim();
        str=str.replaceAll("\\s+"," ");

        String arr[]=str.split(" ");

       System.out.println("Enter the word that you want to search :");
       String Word=sobj.nextLine();


       int iFrequency=0;
       for(String s : arr)
       {
            if(s.equals(Word))
            {
                iFrequency++;
            }

       }
       System.out.println("Frequency of word is :"+iFrequency);


    }

      
}