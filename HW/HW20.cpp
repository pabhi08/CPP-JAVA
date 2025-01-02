// Check whether a number is palindrome or not

#include <iostream>
using namespace std;

bool CheckPalindrome(int no)
{
    int iRev=0;
    int iRem;
    int iTemp=no;
    while(no!=0)
    {
        iRem=no%10;
        iRev=iRev*10+iRem;
        no=no/10;
    }
    if(iTemp==iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int no;
    cout << "Enter the number :" << endl;
    cin >> no;

    bool bret = CheckPalindrome(no);
    if (bret == true)
    {
         cout << "Yes it a palindrome" << endl;
    }
    else
    {
        cout << "It  is not a palindrome" << endl;
    }

    return 0;
}