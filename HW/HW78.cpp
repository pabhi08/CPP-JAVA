#include <bits/stdc++.h>

using namespace std;

void display(int r,int c)
{
    // char ch='\0'
    for(int i=1;i<=r;i++)
    {
         static char ch ='A';
        for(int j=1;j<=c;j++)
        {
           if(i>=j)
           {
            cout<<ch;
            ch++;
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
    int rows, columns;
    cin>>rows;
    cin>>columns;

    display(rows,columns);

}