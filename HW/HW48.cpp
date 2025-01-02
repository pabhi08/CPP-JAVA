// Accept a string from user and determines the length of digits characters in it

#include <iostream>
using namespace std;

int strLenCheckDigits(char *str)
{
    int Cnt = 0;
    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            Cnt++;
        }
        str++;
    }

    return Cnt;
}

int main()
{

    char Arr[20];
    int iRet;

    cout << "Enter the character :" << endl;
    cin >> Arr;

    iRet = strLenCheckDigits(Arr);
    cout << "Length of Digits is :" << iRet << endl;
}