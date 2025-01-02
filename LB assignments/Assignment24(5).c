#include<stdio.h>


void strrevX(char *str)
{
  char *start=NULL;
  char *end=NULL;
  char temp='\0';

  start =str;
  end=str;

  while(*end!='\0')
  {
    end++;
  }
  end--;

  while(start<end)
  {
    temp=*start;
    *start=*end;
    *end=temp;

    start++;
    end--;
  }


}


int main()
{
   char Arr[20];
   
   int iRet=0;

   printf("Enter the string\n :");
   scanf("%[^'\n']s",Arr);

  
   strrevX(Arr);

printf("Modified string is %s",Arr);
  

    return 0;
}