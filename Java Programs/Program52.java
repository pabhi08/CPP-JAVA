import java.util.*;


class Program52
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the subject marks obtained :");
        int marks=sobj.nextInt();

        System.out.println("Enter the total marks of paper:");
        int total=sobj.nextInt();

        float percentage=  (marks)*100/total;
        System.out.println("Percentage Obtained is :"+percentage);
        

    }
}