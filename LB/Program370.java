//accept string from user and remove extra whitespaces(jus one should be there)


import java.util.*;

class Program370
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string :");
        String str=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s+"," ");

        
        System.out.println("Updated string is :"+str);
    }
}