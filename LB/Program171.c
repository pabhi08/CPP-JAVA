#include<stdio.h>


int FirstOccurence(char *str,char cValue)
{
     int iCnt=1;
     int iPos= 0;

     while(*str!='\0')
     {
        if(*str==cValue)
        {
            iPos=iCnt;
            break;
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

  iRet= FirstOccurence(Arr,ch);
  
 
  
    printf("First occurence of the character is at %d\n",iRet);

  
    return 0;
}