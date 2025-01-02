#include<iostream>

using namespace std;

// Abstract Class: A class which contains at least single pure virtual function in it.
 class Base
 {

public :
int A,B;

   virtual int Addition(int i,int j)         //concrete function
{
    return i+j;
}

 virtual int Substraction(int i,int j)            //concrete function
{
    return i-j;
}

virtual int Multiplication(int i,int j)=0;     //Abstract function

 };


 class Derived : public Base
 {

public :
int X,Y;

int Substraction(int X,int Y)
{
    int Ans=0;
    Ans=X-Y;
    return Ans;
}
 
 int Multiplication(int X,int Y)
 {
    return X*Y;
 }
 };

 int main ()
 {

  // Base bobj;  //NA
Base *bp=new Derived;
int Ret=0;

Ret =bp->Addition(10,11);          //Base addition
cout<<"Addition is : "<<Ret<<"\n";

Ret =bp->Substraction(10,11);      //Derived   substraction
cout<<"Substraction is : "<<Ret<<"\n";

Ret =bp->Multiplication(10,11);        //Derived Multiplication
cout<<"Multiplication is : "<<Ret<<"\n";

    return 0;
 }