// check freq of number given by user and even take the number u want to search from user


#include <iostream>
using namespace std;

int Checkfreq(int no,int iSearch)
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
        if (iDig == iSearch)
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
    int iSearch;

    cout << "Enter the number:" << endl;
    cin >> no;

     cout << "Enter the number whose freq you want to check:" << endl;
    cin >> iSearch;

    int iRet = Checkfreq(no,iSearch);
    cout << "Freq of the number is :" << iRet << endl;
}