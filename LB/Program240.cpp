//check n th bit of a no is on or off .take that n bit from user

#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo,UINT iPos)
{
  UINT  iMask=0X00000001;
 UINT iResult=0;

if((iPos<1)||(iPos>32))
{
    cout<<"Invalid Position"<<"\n";
    return false;
}
   iMask=iMask<<(iPos-1);
    iResult=iNo & iMask;
    
  if(iResult==iMask)
  {
    return true;
  }
  else
  {
    return false;
  }

}


int main()
{
    UINT  iValue=0;
    bool bRet=0;
    UINT  iBit=0;
    
    cout<<"Enter the number"<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position (range should be in btw 1 to 32)"<<"\n";
    cin>>iBit;

   bRet=CheckBit(iValue,iBit);
   if(bRet==true)
   {
    cout<<" bit is ON"<<"\n";
   }
   else
   {
    cout<<" bit is OFF"<<"\n";
   }
    return 0;
}