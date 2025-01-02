// Find the max number from user entered number

#include <iostream>
using namespace std;

int CheckMax(int no)
{
    int iDig;
    int iMax = 1;
    if (no < 0) // updater
    {
        no = -no;
    }

    while (no != 0)
    {
        iDig = no % 10;
        if (iDig > iMax)
        {
            iMax = iDig;
        }
        no = no / 10;
    }

    return iMax;
}

int main()
{
    int no;
    cout << "enter the number :" << endl;
    cin >> no;

    int iRet = CheckMax(no);
    cout << "Maximum number found is :" << iRet << endl;
}
