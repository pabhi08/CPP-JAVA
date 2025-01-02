#include <iostream>
using namespace std;

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char Arr[30];
    cout << "Enter the string :" << endl;
    cin >> Arr;

    strrevX(Arr);

    cout << "String after reversing is :" << Arr << endl;

    return 0;
}