// Copy the elements of one array into another
#include <iostream>
using namespace std;

void strcopy(char *source, char *destination)
{
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination='\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter the string :" << endl;
    cin >> Arr;

    strcopy(Arr, Brr);
    cout << "Elements after copying:" << Brr << endl;

    return 0;
}