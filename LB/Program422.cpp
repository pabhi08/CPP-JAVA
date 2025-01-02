#include<iostream>
using namespace std;

void Swap(int &No1,int &No2)   //passing paramters by call by reference mechanism
{
   int Temp;
   Temp=No1;
   No1=No2;
   No2=Temp;
}


void Swap(double &No1,double &No2)   //passing paramters by call by reference mechanism
{
double Temp;
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