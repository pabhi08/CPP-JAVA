//Accept one number from user and check whether 3 bit is on and off.

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
  int iMask=4;
  int iResult=0;

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
    int iValue=0;
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