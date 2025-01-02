// pattern printing :
//  i/p - 4,5
//        * * * * *
//        * * * * *
//        * * * * *
//        * * * * *

#include <iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    int Cnt = 0;
    for (int Cnt = 1; Cnt <= iRow; Cnt++)
    {
        for (int Cnt = 1; Cnt <= iCol; Cnt++)
        {
            cout << "*" << "\t";
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
