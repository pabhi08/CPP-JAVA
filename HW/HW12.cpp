#include<iostream>
using namespace std;

int CheckEvenOdd(int n1)
{
    if(n1%2==0)
    {
      cout<<"It is even";
    }
    else
    {
      cout<<"It is odd";
    }
    
    
}

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    CheckEvenOdd(n);

    return 0;
}