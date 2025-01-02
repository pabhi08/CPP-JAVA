#include<stdio.h>


void Display(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
       printf("decimal value is %d\n",ch);
        printf("octal value is %o\n",ch);
        printf("hexadecimal value is %x",ch);
    }
   

}
  
  


int main()
{
   char cValue=0;
 

   printf("Enter the character\n");
   scanf("%c",&cValue);

  Display(cValue);
   
   
   return 0;
}