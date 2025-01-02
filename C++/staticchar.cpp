#include<iostream>

using namespace std;

class Demo
{
public:
int A,B;                // Non Static Characteristics
static int X ,Y;        //Static Characteristics

Demo()        // Default Constructor
{ 
    //Initialisation of non static characteristics
A=0;
B=0;
}

};

// Initialisation of static characteristics
int Demo::X=10;
int Demo::Y=20;




int main()
{
    cout<<"value of X:"<<Demo::X<<"\n";
    cout<<"value of Y :"<<Demo::Y<<"\n";

Demo obj1;
Demo obj2;


cout<<"Value of A from obj1 is :"<<obj1.A<<"\n";
cout<<"Value of A  from obj2 is :"<<obj2.A<<"\n";
 
 obj1.A++;

cout<<"Value of A from obj1 is :"<<obj1.A<<"\n";
cout<<"Value of A from obj2 is :"<<obj2.A<<"\n";


cout<<"size of demo class object is :"<<sizeof(obj1)<<"\n";

    return 0;
}