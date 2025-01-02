
// 1
// 0 1
// 1 0 1


#include<iostream>
using namespace std;


int main()
{
    int rows,columns;
    cin>>rows;
    cin>>columns;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=columns;j++)
        {
           if(((i+j)%2==0)&&(i>=j))
           {
            cout<<"1";
           }    
           else if(((i+j)%2!=0)&&(i>=j))
           {
            cout<<"0";
           }
           else
           {
            cout<<" ";
           }
        }
        cout<<"\n";
    }
}