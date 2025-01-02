#include<stdio.h>

int  Difference(char *str)
{
    int isCnt=0;
     int icCnt=0;
    


    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
           isCnt++;
        }
        else if((*str>='A')&&(*str<='Z'))
        {
            icCnt++;
        }
        
        str++;

    }
    return ((isCnt)-(icCnt)) ;

}



int main()
{
char Arr[20];
int iRet=0;

printf("Enter the string\n :");
scanf("%[^'\n']s",Arr);

iRet= Difference(Arr);
printf("%d\n",iRet);



    return 0;
}