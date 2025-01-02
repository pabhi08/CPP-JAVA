#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char ch)
{  
    if((ch>='A')&&(ch<='D')||(ch<='a')&&(ch>='d'))
   {
    if((ch=='A')||(ch=='a'))
    {
        printf("Your exam time is at 7am\n");
    }
     else if((ch=='B')||(ch=='b'))
    {
        printf("Your exam time is at 8:20am\n");
    }

    else if((ch=='C')||(ch=='c'))
    {
        printf("Your exam time is at 9.20am\n");
    }

    else if((ch=='D')||(ch=='d'))
    {
        printf("Your exam time is at 10.30am\n");
    }
   }




}



int main()
{
    char cValue ='\0';
    bool bRet= false;

    printf("Enter the division\n");
    scanf("%c",&cValue);

   DisplaySchedule(cValue);




 return 0;
}