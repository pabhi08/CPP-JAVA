#include<stdio.h>
#define ERR_NOTFOUND -1

int LastOccurence(char *str,char ch)
{
     int iCnt=1;
     int iPos=ERR_NOTFOUND;
    while((*str!='\0'))
    {
        if(*str==ch)
        {
           iPos=iCnt;
        }
        str++;
        iCnt++;
          
    }
    return iPos;
}


int main()
{
   char Arr[20];
   char ch1='\0';
   int iRet=0;

   printf("Enter the string\n :");
   scanf("%[^'\n']s",Arr);

   printf("Enter the character\n :");
   scanf(" %c",&ch1);

   iRet=LastOccurence(Arr,ch1);

  if(iRet==ERR_NOTFOUND)
  {
    printf("There is no such character\n");

  }
  else
  {
     printf("Last occurence of the element is %d\n",iRet);
  }

    return 0;
}