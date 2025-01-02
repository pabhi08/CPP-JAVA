// i/p=5
// o/p= -5  -4  -3  -2  -1  0   1   2   3   4   5

#include <iostream>
using namespace std;

void Display(int Val)
{
    int Cnt = 0;

    for (Cnt = -Val; Cnt <= 0; Cnt++)
    {
        cout << Cnt << "\t";
    }

    for (Cnt = 1; Cnt <= Val; Cnt++)
    {
        cout << Cnt << "\t";
    }
}

int main()
{
    int value;

    cout << "Enter the value" << endl;
    cin >> value;

    Display(value);
}