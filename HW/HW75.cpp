

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cin >> rows;
    cin >> columns;
    char ch;

    for (int i = 0; i <rows; i++)
    {

        for (ch = ('A' + columns - 1) - i; ch <= ('A' + columns - 1); ch++)
        {
             cout << ch<<" ";
        }
        cout << "\n";
    }
}