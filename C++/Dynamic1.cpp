#include<iostream>

using namespace std;

class Demo
{
public :
int A,B;

Demo()
{
    cout<<"Inside Default Consturctor"<<"\n";
 }

Demo(int i,int j)
{
    cout<<"Inside parameterised Consturctor"<<"\n";
}
 
 ~Demo()
 {
    cout<<"Inside Destructor"<<"\n";
 }

};

int main()
{
cout<<"Inside main"<<"\n";

Demo obj1;         // Static Memory allocation 
Demo obj2(11,21);   // Static Memory allocation 

Demo *p=new Demo();     // Dynamic Memory allocation 
Demo *q=new Demo(11,21); // Dynamic Memory allocation 

delete p;
delete q;

cout<<"end of main"<<"\n";

    return 0;
}