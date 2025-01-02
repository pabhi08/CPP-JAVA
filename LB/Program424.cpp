#include<iostream>
using namespace std;


template<class T>
void Swap(T *No1,T *No2)   //passing paramters by call by address technique
{
   T Temp;
   Temp=*No1;
   *No1=*No2;
   *No2=Temp;
}


int main()
{
    int A=10;
    int B=11;
    Swap(&A,&B);

cout<<"Data after swapping :"<<"\n";
cout<<"Value from A :"<<A<<"\n";
cout<<"Value from B :"<<B<<"\n";


      return 0;
}