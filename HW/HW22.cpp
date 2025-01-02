// Find the minimum number from user entered number

#include <iostream>
using namespace std;

int CheckMin(int no)
{
    int iDig;
    int iMin = 9;
    if (no < 0) // updater
    {
        no = -no;
    }

    while (no != 0)
    {
        iDig = no % 10;
        if (iDig < iMin)
        {
            iMin = iDig;
        }
        no = no / 10;
    }

    return iMin;
}

int main()
{
    int no;
    cout << "enter the number :" << endl;
    cin >> no;

    int iRet = CheckMin(no);
    cout << "Minimum number found is :" << iRet << endl;
}
