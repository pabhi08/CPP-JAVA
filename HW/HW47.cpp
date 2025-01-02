// Accept a string from user and determines the length of capital characters in it

#include <iostream>
using namespace std;

int strLenCheckCapital(char *str)
{
    int Cnt = 0;
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
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

    iRet = strLenCheckCapital(Arr);
    cout << "Length of Capital string is :" << iRet << endl;
}