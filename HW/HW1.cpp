#include<iostream>
using namespace std;

class HW1
{

public :
int iNo;
int iCnt;

HW1(int X)
{
    iNo=X;
    cout<<"Inside Constructor"<<"\n";
    
}

void Display()
{
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        cout<<iCnt<<"\n";
    }
}

};


int main()
{

 int iValue=0;  


 cout<<"Enter the number you want to display"<<"\n";
 cin>>iValue;

HW1 hobj(iValue);

hobj.Display();

    return 0;
}