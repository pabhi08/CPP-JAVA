// class= characteristics + Behaviour
// class = Data + Function

#include<iostream>

using namespace std;

class demo
{

public:
int no1;
int no2;

void fun()
{
    cout<<"Inside fun\n";
}
};


int main()
{
 demo obj1;
 demo obj2;

cout<<"size of obj1 is : "<<sizeof(obj1)<<"\n";

obj1.no1=10;
obj1.no2=20;
    
obj2.no1=30;
obj2.no2=40;

cout<<obj2.no2<<"\n";
    
obj1.fun();
    return 0;
}