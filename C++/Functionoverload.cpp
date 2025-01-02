#include<iostream>
using namespace std;
class Demo
{

public:

int Addition(int no1,int no2)    //Addition@2ii
{
    cout<<"Addition of 2 integers :"<<"\n";
   return no1+no2;
}

int Addition(int no1,int no2,int no3)    //Addition@3iii
{
    cout<<"Addition of 3 integers :"<<"\n";
return no1+no2+no3;
}

float Addition(float no1,float no2)  //Addition@2ff
{
cout<<"Addition of 2 float is :"<<"\n";
    return no1+no2;   
}

  double Addition(double no1,double no2)  // Addition@2dd
 {
    cout<<"Addition of 2 doubles is :"<<"\n";
    return no1+no2;
}

};

int main()
{
Demo obj;

 int iRet =obj.Addition(10,11);    // addition@2ii(&obj,10,11)
 cout<<"Addition of integer is : "<<iRet<<"\n";

 iRet =obj.Addition(10,11,51);   //addition@3iii(&obj,10,11,51)
 cout<<"Addition of integer is "<<iRet<<"\n";


float fRet =obj.Addition(10.5f,90.7f);  //addition@2ff(&obj,10.5,90.7f)
 cout<<"Addition of integer is "<<fRet<<"\n";

double dRet =obj.Addition(10.5,90.7);  //addition@2dd(&obj,10.5,90.7)
 cout<<"Addition of integer is "<<dRet<<"\n";
   
    return 0;
}