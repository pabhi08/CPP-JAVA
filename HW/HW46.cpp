// Accept a string from user and determines the length of small characters in it

#include <iostream>
using namespace std;

int strLenCheckSmall(char *str)
{
    int Cnt = 0;
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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

    iRet = strLenCheckSmall(Arr);
    cout << "Length of small string is :" << iRet << endl;
}