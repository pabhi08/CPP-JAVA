#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT OFFBit(UINT iNo )
{
  return (iNo&0XFFFFFFBF);
}


int main()
{
    UINT  iValue=0;
  
    UINT iRet=0;
   
    
    cout<<"Enter the number"<<"\n";
    cin>>iValue;


   iRet=OFFBit(iValue);
   cout<<"Result is "<<iRet<<"\n";
   
    return 0;
}