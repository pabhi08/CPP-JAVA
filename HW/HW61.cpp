// Copy only capital elements of one array into another array
#include <iostream>
using namespace std;

void strcpycapital(char *source, char *destination)
{
    while (*source != '\0')
    {
        if ((*source >= 'A') && (*source <= 'Z'))
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

    strcpycapital(Arr, Brr);
    cout << "Elements after copying:" << Brr << endl;

    return 0;
}