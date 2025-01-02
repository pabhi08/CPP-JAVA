//dynamically taking imput from user

#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT OFFBit(UINT iNo,UINT iPos )
{
  UINT iMask=0X00000001;
 UINT iResult=0;

iMask=iMask<<(iPos-1);

  iResult=iNo&iMask;
  if(iResult==iMask)   //bit is on
  {
        return (iNo^iMask);
  }
  else  //bit is off
  {
       return iNo;
  }
}


int main()
{
    UINT  iValue=0;
    UINT iBit=0;
    UINT iRet=0;
   
    
    cout<<"Enter the number"<<"\n";
    cin>>iValue;

     cout<<"Enter the position"<<"\n";
    cin>>iBit;

   iRet=OFFBit(iValue,iBit);
   cout<<"Result is "<<iRet<<"\n";
   
    return 0;
}