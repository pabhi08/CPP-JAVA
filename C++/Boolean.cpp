#include<iostream>

using namespace std;

bool CheckEven(int no)
{
    if((no%2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{

int value =0;
bool bRet;

cout<<"Enter number :\n";
cin>>value;

bRet = CheckEven(value);

if (bRet==true)
{
cout<<"It is even number\n";
}
else
{
    cout<<"It is odd number\n";
}

return 0;
}