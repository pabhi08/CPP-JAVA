#include<iostream>

using namespace std;

class Demo
{
public:
int no1;
int no2;

Demo() // Default constructor
{
    cout<<"Inside the default Constructor\n";
    no1=0;
    no2=0;
}

Demo (int A,int B)  //Parameterised Constructor
{
cout<<"Inside parameterised constructor\n";
no1=A;
no2=B;
}

Demo(Demo &ref)   //Copy Constructor
{
cout<<"Inside the copy constructor\n";
no1=ref.no1;
no2=ref.no2;
}

~Demo()    //(~) means destructor symbol
{
    cout<<"Inside Destructor\n";
}

void fun()
{
    cout<<"Inside fun\n";
}

void gun()
{
    cout<<"Inside gun\n";
}

};



int main()
{

cout<<"Inside the main\n";

Demo obj1;
cout<<"Value of no1 from obj1 is : "<<obj1.no1<<"\n";
cout<<"Value of no2 from obj1 is : "<<obj1.no2<<"\n";

Demo obj2(11,21);
cout<<"Value of no1 from obj2 is : "<<obj2.no1<<"\n";
cout<<"Value of no1 from obj2 is : "<<obj2.no2<<"\n";

 Demo obj3(obj2);
  cout<<"Value of no1 from obj3 is : "<<obj3.no1<<"\n";
  cout<<"Value of no1 from obj3 is : "<<obj3.no1<<"\n";  
    
    
    return 0;
}