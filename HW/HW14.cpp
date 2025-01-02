#include<iostream>
using namespace std;

int main()
{
    int irow,jcol;
    cout<<"Enter the number of rows"<<endl;
    cin>>irow;

   cout<<"Enter the number of columns"<<endl;
    cin>>jcol;    

    for(int i=1;i<=irow;i++)
    {
        for(int j=1;j<=jcol;j++)
        {
             if((i==j)||(i>j))
             {
                cout<<"*";
             }
             else
             {
                cout<<" ";
             }
             
        }
        cout<<"\n";
    }

  return 0;
}