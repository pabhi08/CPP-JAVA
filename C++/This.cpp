// just a simple code to explain the concept of this pointer//


#include<iostream>
using namespace std;
class Demo
{


public:

int no1;
int no2;

Demo(int i,int j)
{
no1=i;
no2=j;

}

void fun(int A ,int B)     //void fun(Demo*this,int A,int B)
{
   cout<<"Inside fun :"<<this->no1<<"\n";
   cout<<"Inside fun :"<<this->no2<<"\n"; 
}
void gun(int A)        //void gun(Demo*this,int A)
{
   cout<<"Inside gun :"<<this->no1<<"\n";
   cout<<"Inside gun :"<<this->no2<<"\n";
}


};

int main()
{
Demo obj1(11,21);
Demo obj2(51,10);

//obj1.fun(10,20);   //fun(&obj1,11,21);   fun(100,10,20)
//obj2.gun(10);     //gun(&obj2,11);        gun(200.,10)        


    return 0;
}