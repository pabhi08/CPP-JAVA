// Accept a string from user and determines its length

#include <iostream>
using namespace std;

int strLenx(char *str)
{
    int Cnt = 0;
    while (*str != '\0')
    {
        str++;
        Cnt++;
    }

    return Cnt;
}

int main()
{

    char Arr[20];
    int iRet;

    cout << "Enter the character :" << endl;
    cin >> Arr;

    iRet = strLenx(Arr);
    cout << "Length of string is :" << iRet << endl;
}