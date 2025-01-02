//modification 
#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
  UINT int iMask=4;
 UINT int iResult=0;

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
    UINT int iValue=0;
    bool bRet=0;
    cout<<"Enter the number"<<"\n";
    cin>>iValue;

   bRet=CheckBit(iValue);
   if(bRet==true)
   {
    cout<<"3 bit is ON"<<"\n";
   }
   else
   {
    cout<<"3 bit is OFF"<<"\n";
   }
    return 0;
}