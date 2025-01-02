//display the digits entered by the user

#include<iostream>
using namespace std;


void DisplayDigit(int x)
{
    int iDig;
   while(x!=0)
{
    iDig=x%10;
    cout<<iDig<<endl;
    x=x/10;
}
}



int main()
{
    int no;
    cout<<"Enter the number :"<<endl;
    cin>>no;

    DisplayDigit(no);
    

}