#include<stdio.h>
#define ERR_NOTFOUND -1

void  Frequency(char *str)
{
     int iSmallCnt=0;
     int iCapCnt=0;
   
   while (*str!='\0')
   {
   
    if((*str>='a')&&(*str<='z'))
    {
        iSmallCnt++;
    }
     else if((*str>='A')&&(*str<='Z'))

     {
         iCapCnt++;
     }
     str++;
   }
   printf("Small case characters count %d\n",iSmallCnt);
    printf("capital case characters count %d\n",iCapCnt);
}



int main()
{
  char ch='\0';
  char Arr[20];
  int iRet=0;


  printf("Enter the string\n :");
  scanf("%[^'\n']s",Arr);

 

   Frequency(Arr);
  


    return 0;
}