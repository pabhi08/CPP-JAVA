// check whether two strings are same or not
#include <iostream>
using namespace std;

bool strcmp(char *str1, char *str2)
{
    while ((*str1 != '\0') && (*str2 != '\0'))
    {
        if (*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;
    }
    if ((*str1 == '\0') && (*str2 == '\0'))
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
    char Arr[40];
    char Brr[40];

    cout << "Enter the string 1:" << endl;
    cin >> Arr;

    cout << "Enter the string 2 :" << endl;
    cin >> Brr;

    bool bRet = strcmp(Arr, Brr);
    if (bRet == true)
    {
        cout << "Strings are identical" << endl;
    }
    else
    {
        cout << "Strings are not identical" << endl;
    }

    return 0;
}