//string where only small letters copies
#include<stdio.h>

// src=source  dest -destination
void  strcpyCapX(char *src,char *dest)
{
   while(*src!='\0')
   {
      if((*src>='A')&&(*src<='Z'))
      {
            *dest=*src;
             dest++;      
      }
    src++;
   
   }
      *dest='\0';

}


int main()
{
  
  char Arr[20];
  char Brr[20];

  printf("Enter the string\n :");
  scanf("%[^'\n']s",Arr);

    strcpyCapX(Arr,Brr);
  
  printf("String after copy is %s\n",Brr);

   return 0;
}