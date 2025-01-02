// pattern printing :
//  i/p - 4,4
//              *
//            * * 
//          * * *
//        * * * *
//        * * * *
//          * * *
//            * *
//              *


#include <iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    int i, j = 0;
    for (i = iRow; i>=1; i--)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i <= j) // 4
            {
                cout<<"*\t";
            }
            else
            {
                cout<<" \t";
            }
        }
        cout << "\n";
    }

    for (i = iRow; i>=1; i--)
    {
        for (j = iCol; j >= 1; j--)
        {
            if (i >= j) // 4
            {
                cout<<"*\t";
            }
            else
            {
                cout<<" \t";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int iRow, iCol;

    cout << "Enter the number of rows :" << endl;
    cin >> iRow;

    cout << "Enter the number of coloumns :" << endl;
    cin >> iCol;

    Display(iRow, iCol);

    return 0;
}
