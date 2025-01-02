import java.util.*;

class Program9
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        
        int rev=0,temp,rem;
        
        
        System.out.println("Enter the number :");
        int n=sobj.nextInt();
        
        temp=n;
        while(n!=0)
        {
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
        }
        if(rev==temp)
        {
           System.out.print("The number is palindrome");    
        }
        else
        {
             System.out.print("The number is not a  palindrome"); 
        }
    }
}