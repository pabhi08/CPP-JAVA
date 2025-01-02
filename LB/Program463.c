#include<stdio.h>

// ip - 4
// o/p - 1234

DisplayR(int iNo)
{
    int iCnt=1;
    if(iCnt<=iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}


int main()
{
    int iValue=0;
    printf("Enter the number of elements :\n");
    scanf("%d",&iValue);
    
     DisplayR(iValue);
     
    return 0;
}