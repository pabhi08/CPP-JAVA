// count of no space bar given

#include<stdio.h>


int CountSpace(char *str)
{
    int Cnt=0;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            Cnt++;
        }
        str++;
    }
       return Cnt;
}

int main()
{

char Arr[20];
int iRet=0;


printf("Enter the string\n :");
scanf("%[^'\n']s",Arr);

iRet = CountSpace(Arr);
printf("No of spaces are %d\n",iRet);




    return 0;
}