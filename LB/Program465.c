#include<stdio.h>

// ip - 4
// o/p - 1234

void DisplayR(int iNo)
{
    if(iNo!=0)
    {
        printf("%d\t",iNo%10);
        iNo=iNo/10;
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