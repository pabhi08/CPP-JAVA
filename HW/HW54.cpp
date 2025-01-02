// Calculate the frequency of small and capital letters
#include <iostream>
using namespace std;

void CalculateFreq(char *str)
{
    int CapCnt = 0;
    int SmallCnt = 0;
    while (*str != '\0')
    {

        if ((*str >= 'A') && (*str <= 'Z'))
        {
            CapCnt++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            SmallCnt++;
        }
        str++;
    }
    cout << "Count of Capital letters :" << CapCnt << endl;
    cout << "Count of Small letters :" << SmallCnt << endl;
}

int main()
{
    char Arr[30];

    cout << "Enter the string:" << endl;
    cin >> Arr;

    CalculateFreq(Arr);

    return 0;
}