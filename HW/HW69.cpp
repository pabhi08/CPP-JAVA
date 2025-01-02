// display a fiboanacci triangle

#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,c,n,i,j;
    cout<<"Enter the limit :"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        a=0;
        b=1;
        cout<<b<<"\t";
        for(j=1;j<i;j++)
        {
            c=a+b;
            cout<<c<<"\t";
            a=b;
            b=c;

        }
        cout<<"\n";
    }
    return 0;
}