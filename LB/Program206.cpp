#include<iostream>
using namespace std;

class Number
{

public :
  int iNo1;        //characteristics 
  int iNo2;


   int Maximum()            //behaviour
   {

      if(iNo1>iNo2)
     { 
        return iNo1;
     }
      else 
     {
        return iNo2;
     }

   } 
};

int main()
{
    int iValue1,iValue2;
    int iRet=0;
    Number nobj;

    cout<<"Enter the 1 number"<<"\n";
    cin>>iValue1;
    nobj.iNo1=iValue1;

    cout<<"Enter the 2 number"<<"\n";
    cin>>iValue2;
     nobj.iNo2=iValue2;

    iRet= nobj.Maximum();

    cout<<"Maximun number is "<<iRet<<"\n";
    return 0;
}