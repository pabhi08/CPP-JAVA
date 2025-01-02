#include<stdio.h>


void Display(char ch)
{
   for(;(ch>='A')&&(ch<='Z');ch++)
   {
     printf("%c\n",ch);
   }

    for(;(ch>='a')&&(ch<='z');ch--)
    {
       printf("%c\n",ch);
    }



}
  
  


int main()
{
   char cValue='0';
   

   printf("Enter the character\n");
   scanf("%c",&cValue);

   Display(cValue);
   
   return 0;
}