

#include<stdio.h>

int CountChar(char *str,char cValue)
{
   int iCount=0;
    
    while(*str!='\0')
    {
        if(*str==cValue)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
   char Arr[20];
   char ch='\0';
   int iRet=0;
 
   printf("Enter string\n :");
    scanf("%[^'\n']s",Arr);     //Special scanf



     printf("Enter the character\n :");
    scanf(" %c",&ch);    //space bar is used before %c so it can take character
 
    
   

  
   iRet=CountChar(Arr,ch);    //strlenX(100);

   printf("number of occurences : %d\n",iRet);



    return 0;
}