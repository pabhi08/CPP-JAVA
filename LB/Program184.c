//string where only small letters copies
#include<stdio.h>

// src=source  dest -destination
void  strcpysmallX(char *src,char *dest)
{
   while(*src!='\0')
   {
      if((*src>='a')&&(*src<='z'))
      {
            *dest=*src;
             dest++;      //taken inside because if it capital letters come it skips it
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

    strcpysmallX(Arr,Brr);
  
  printf("String after copy is %s\n",Brr);

   return 0;
}