// find the HCF of the given number

#include<iostream>
using namespace std;

int main()
{
    int x,y,ans;
    cout<<"Enter the 1 no"<<endl;
    cin>>x;

    cout<<"Enter the 2 no"<<endl;
    cin>>y;

    if(x>y)
    {
        ans=x-y;
        
    }
    else
    {
        ans=y-x;
      
    }
    cout<<ans;
    return 0;
}