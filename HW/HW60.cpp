// Copy only small elements of one array into another array
#include <iostream>
using namespace std;

void strcpysmall(char *source, char *destination)
{
    while (*source != '\0')
    {
        if ((*source >= 'a') && (*source <= 'z'))
        {
            *destination = *source;
            destination++;
        }
        source++;
    }
    *destination = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter the string :" << endl;
    cin >> Arr;

    strcpysmall(Arr, Brr);
    cout << "Elements after copying:" << Brr << endl;

    return 0;
}