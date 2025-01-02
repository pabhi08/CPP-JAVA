#include<iostream>
using namespace std;

//Parent Class
class Demo
{
 public:
 int A,B;

Demo()
{
 A=10 ,B=11;
    cout<<"Inside Demo constructor"<<"\n";
}

~Demo()
 {
    cout<<"Inside Demo Destructor"<<"\n";
 }

void fun()
{
    cout<<"Inside fun of Demo"<<"\n";
}

};

//Child class
class Hello :public Demo     // class Hello extends Demo
{
 public:
 int X,Y;

 Hello()
 {
 X=51, Y=100;
cout<<"Inside the Hello constructor"<<"\n";
 }

 ~Hello()
 {
    cout<<"Inside Hello Destructor"<<"\n";
 }

void gun()
{
    cout<<"Inside gun of Hello"<<"\n";
}

};

class PPA :public Hello                 //Multilevel Inheritance
{

public:
 int I,J;

 PPA()
 {
I=111, J=121;
cout<<"Inside the PPA constructor"<<"\n";
 }

 ~PPA()
 {
    cout<<"Inside PPA Destructor"<<"\n";
 }

void sun()
{
    cout<<"Inside sun of PPA"<<"\n";
}

};


int main()
{
cout<<"Inside the main"<<"\n";

cout<<"Size of Demo :"<<sizeof(Demo)<<"\n";
cout<<"Size of Demo :"<<sizeof(Hello)<<"\n";
cout<<"Size of Demo :"<<sizeof(PPA)<<"\n";

PPA pobj;

pobj.fun();
pobj.gun();
pobj.sun();


cout<<pobj.A<<"\n";
cout<<pobj.B<<"\n";
cout<<pobj.X<<"\n";
cout<<pobj.Y<<"\n";
cout<<pobj.I<<"\n";
cout<<pobj.J<<"\n";

cout<<"End of the main"<<"\n";
    return 0;
}