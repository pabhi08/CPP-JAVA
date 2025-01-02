// Accept the character from user and check whethe it is capital or not

#include<iostream>
#include<string.h>
using namespace std;

bool CheckCapital(char cValue)
{
     if((cValue>=65)&&(cValue<=90))
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
    char name='\0';
    cout<<"Enter the name :"<<endl;
    cin>>name;

    bool bRet=CheckCapital(name);
    if(bRet==true)
    {
         cout<<"capital letters are present in the string"<<endl;
    }
    else
    { 
        cout<<"capital letters are not present in the string"<<endl;
    }

    return 0;
}