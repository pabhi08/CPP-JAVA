//Except number from user and check whether the number finds 8 

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
  int iDigit=0;
  bool bFlag=false;
  
   while(iNo!=0)
   {
    iDigit =iNo%10;

    if(iDigit==8)
    {
        bFlag=true;
        break;
    }
    iNo=iNo/10;
    }
return bFlag;
    
   
}

int main()
{

    int iValue =0;
    int bRet=0;

    printf("Enter the number\n ");
    scanf("%d",&iValue);

    bRet= CheckDigit(iValue);
    if(bRet=true)
    {
        printf("Digit 8 is present in number\n ");

    }
    else
    {
          printf("Digit 8 is  not present in number\n ");
    }
    

    return 0;
}