#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurence(char *str,char ch)
{
     int iCnt=1;
    while((*str!='\0')&&(*str!=ch))
    {
          str++;
          iCnt++;
    }
    if(*str=='\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
}


int main()
{
   char Arr[20];
   char ch1='\0';
   int iRet=0;

   printf("Enter the string\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter the character\n");
   scanf(" %c",&ch1);

   iRet=FirstOccurence(Arr,ch1);

  if(iRet==ERR_NOTFOUND)
  {
    printf("There is no such character\n");

  }
  else
  {
     printf("First occurence of the element is %d\n",iRet);
  }

    return 0;
}