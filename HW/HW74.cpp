
// 1
// 2 3
// 4 5 6


#include<iostream>
using namespace std;


int main()
{
    int rows,columns;
    cin>>rows;
    cin>>columns;

    for(int i=1;i<=rows;i++)
    {
       static int iCnt=1;
        for(int j=1;j<=columns;j++)
        {
            if(i>=j)
            {
                cout<<iCnt;
                iCnt++;

            }
            else
            {
                cout<<" ";
            }
           
        }
        cout<<"\n";
    }
}