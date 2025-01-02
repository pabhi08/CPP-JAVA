// Accept a string from user and determines the length of vowels in it

#include <iostream>
using namespace std;

int strLenCheckVowels(char *str)
{
    int Cnt = 0;
    while (*str != '\0')
    {
        if ((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
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

    iRet = strLenCheckVowels(Arr);
    cout << "Length of vowels is :" << iRet << endl;
}