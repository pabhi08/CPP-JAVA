#include<stdio.h>

int MinimumDigit(int iNo)
{
int iDigit=0;
int iMin=9;

if(iNo<0)
{
    iNo=-iNo;
}

while(iNo!=0)
{
    iDigit=iNo%10;
    if(iDigit<iMin)
    {
        iMin =iDigit;
    }
    if(iMin==0)         //jar 0 sapdla pahilach tr break (optimisation)
    {
        break;
    }
    iNo=iNo/10;
}
return iMin;
        
}


int main()
{

    int iValue =0;
    int  iRet=0;

    printf("Enter the number\n ");
    scanf("%d",&iValue);

    iRet=MinimumDigit(iValue);

    printf("Smallest of digits is : %d \n",iRet);

   
   
   
    return 0;
}