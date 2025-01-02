#include<iostream>
 using namespace std;
class Arithematic
{

private:
int no1;
int no2;

public:
Arithematic()
{
    no1=0;
    no2=0;
}
Arithematic(int A,int B)
{
    no1=A;
    no2=B;
}

int Addition()
{
    int Ans =0;
    Ans =no1+no2;
    return Ans;
}

int Substraction()
{
    int Ans =0;
    Ans =no1-no2;
    return Ans;
}


};

int main()
{
Arithematic obj1(10,7);
Arithematic obj2;

int Ret=0;
Ret=obj1.Addition();
cout<<"Addition is :"<<Ret<<"\n";

Ret=obj2.Substraction();
cout<<"Substraction is :"<<Ret<<"\n";

    return 0;
 }