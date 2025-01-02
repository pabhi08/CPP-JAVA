#include<stdio.h>


void Display(char *str)
{
  while (*str!='\0')
  {
    if((*str>='a')&&(*str<='z'))
  {
    *str = *str - 32 ;
    printf("capital letter is %s\n",*str);
  }
  
  else
  {
    printf("no change\n");
  }
}
  }
  
  


int main()
{
   char Arr[10];
   printf("Enter the string\n");
   scanf("%c",Arr);

   Display(Arr);
 
   return 0;
}