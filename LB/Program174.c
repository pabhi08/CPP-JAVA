#include<stdio.h>
#define ERR_NOTFOUND -1

int LastOccurence(char *str,char cValue)
{
     int iCnt=1;
     int iPos= ERR_NOTFOUND;

     while(*str!='\0')
     {
        if(*str==cValue)
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
  char ch='\0';
  char Arr[20];
  int iRet=0;


  printf("Enter the string\n :");
  scanf("%[^'\n']s",Arr);

  printf("Enter the character\n :");
  scanf(" %c",&ch);

  iRet= LastOccurence(Arr,ch);
  
  if(iRet==ERR_NOTFOUND)
  {
    printf("There is no such character\n");
  }
  else
  {
    printf("First occurence of the character is at %d\n",iRet);

  }

    return 0;
}