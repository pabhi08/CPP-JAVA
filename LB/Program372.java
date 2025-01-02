import java.util.*;

class Program372
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string :");
        String str=sobj.nextLine();



       str=str.trim();
        str=str.replaceAll("\\s+"," ");

       if(str.length()==0)
       {
         System.out.println("Number of words : 0 ");
         return;
       }
      

int iFrequency=0;
        for(int iCnt=0;iCnt<str.length();iCnt++)
        {
            if(str.charAt(iCnt)==' ')
            {
                 iFrequency++;
            }
        }
            
            System.out.println("Number of words :"+(iFrequency+1));
    }

      
}