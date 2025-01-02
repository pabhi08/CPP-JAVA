//i/p= 3
//o/p= 0   1   2


#include<stdio.h>

void Display(int iNo)
{

int iCnt=0;
for(iCnt=1;iCnt<=iNo;iCnt++)
{
    printf("%d\t",iCnt-1);
}
}

int main()
{
    int iFrequency=0;

    printf("Enter the frequency of symbol\n :");
    scanf("%d",&iFrequency);
    
    Display(iFrequency);  
    
    return 0;

}