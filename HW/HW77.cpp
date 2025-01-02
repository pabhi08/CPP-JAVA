// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

void display(int row,int column)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            if((i==1)||(i==row)||(j==1)||(j==column))
            {
               cout<<"%";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    int irows=0,jcolumns=0;
    cin>>irows;
    cin>>jcolumns;

    display(irows,jcolumns);
    
    return 0;

}

