// Accept the character from user and check whethe it is capital or not
// basic code not that much useful

#include<iostream>
#include<string.h>
using namespace std;

bool CheckSmall(char cValue)
{
     if((cValue>=97)&&(cValue<=122))
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

    bool bRet=CheckSmall(name);
    if(bRet==true)
    {
         cout<<"small letters are present in the string"<<endl;
    }
    else
    { 
        cout<<"small letters are not present in the string"<<endl;
    }

    return 0;
}