#include<iostream>
using namespace std;

void Swap(int &No1,int &No2)   //passing paramters by call by reference mechanism
{
   int Temp;
   Temp=No1;
   No1=No2;
   No2=Temp;
}


int main()
{
    int A=10;
    int B=11;
    Swap(A,B);

cout<<"Data after swapping :"<<"\n";
cout<<"Value from A :"<<A<<"\n";
cout<<"Value from B :"<<B<<"\n";


      return 0;
}