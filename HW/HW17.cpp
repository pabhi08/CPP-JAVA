// check frequency of the given number in the number given by user

#include <iostream>
using namespace std;

int Checkfreq(int no)
{
    int iDig;
    int iCnt = 0;
    if (no < 0) //updater
    {
        no = -no;
    }
    while (no != 0)
    {
        iDig = no % 10;
        if (iDig == 5)
        {
            iCnt++;
        }
        no = no / 10;
    }

    return iCnt;
}

int main()
{
    int no;
    cout << "Enter the number:" << endl;
    cin >> no;

    int iRet = Checkfreq(no);
    cout << "Freq of the number is :" << iRet << endl;
}