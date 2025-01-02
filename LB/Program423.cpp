#include<iostream>
using namespace std;

template<class T>

void Swap( T &No1, T &No2)   //passing paramters by call by reference mechanism
{
   T Temp;
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

double X =10.89;
double Y=11.67;
Swap(X,Y);

cout<<"Data after swapping :"<<"\n";
cout<<"Value from A :"<<X<<"\n";
cout<<"Value from B :"<<Y<<"\n";

 return 0;
}