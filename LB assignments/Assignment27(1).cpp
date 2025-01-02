#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT OFFBit(UINT iNo)
{
  UINT  Mask=0X40;
 UINT iResult=0;

  iResult=iNo & Mask;
if(iResult==Mask)
{
return ;
}
else
{
    return true;
}


  
}


int main()
{
    UINT  iValue=0;
    int iRet=0;
    
    cout<<"Enter the number"<<"\n";
    cin>>iValue;

    
   iRet=OFFBit(iValue);
  
    return 0;
}