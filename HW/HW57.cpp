// Try to convert the given string from lower to upper case
#include <iostream>
using namespace std;

void strupper(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char Arr[50];
    cout << "Enter the string :" << endl;
    // scanf("%[^'\n']s",Arr);
    cin >> Arr;

    strupper(Arr);

    cout << "String After Editing is:" << Arr << endl;

    return 0;
}