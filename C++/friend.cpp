#include<iostream>

using namespace std;


class Marvellous
{
public :
void sun();
void run();

};



class Hello
{

public :
void gun();

};

class Demo
{
public:
int A;
private :
int B;
protected :
int C;

public :
Demo(int i,int j,int k)
{
A=i;
B=j;
C=k;
}

friend void fun();   // due to this we  get access to the private and protected member
friend void Hello::gun();
friend class Marvellous;
};

 
 void  Hello :: gun()
 {

    Demo obj(21,31,41);
cout<<"Value of A :"<<obj.A<<"\n";
cout<<"Value of B:"<<obj.B<<"\n";
cout<<"Value of C :"<<obj.C<<"\n";

 }

void Marvellous ::sun()
{
Demo obj(61,71,81);
cout<<"Value of A :"<<obj.A<<"\n";
cout<<"Value of B:"<<obj.B<<"\n";
cout<<"Value of C :"<<obj.C<<"\n";

}

void Marvellous ::run()
{
Demo obj(81,91,101);
cout<<"Value of A :"<<obj.A<<"\n";
cout<<"Value of B:"<<obj.B<<"\n";
cout<<"Value of C :"<<obj.C<<"\n";
}

void fun()
{
    Demo obj(11,21,51);
cout<<"Value of A :"<<obj.A<<"\n";
cout<<"Value of B:"<<obj.B<<"\n";
cout<<"Value of C :"<<obj.C<<"\n";

}

int main()
{
   
fun();             //naked function is a friend of our class

Hello hobj;
hobj.gun();      //member function of  class is a friend of our class

Marvellous mobj;        //whole class is a friend of our class
mobj.sun();
mobj.run();

return 0;
}