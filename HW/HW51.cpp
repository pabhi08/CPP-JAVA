// count the no of characters repeated in a string ,take the i/p from user
#include <iostream>
using namespace std;

int CountChar(char *str, char Search)
{
    int Cnt = 0;
    while (*str != '\0')
    {
        if (*str == Search)
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
    char SChar;
    int iRet;

    cout << "Enter the string  :" << endl;
    cin >> Arr;

    cout << "Enter the character to be searched  :" << endl;
    cin >> SChar;

     iRet = CountChar(Arr, SChar);
    cout<<"No of chracter are:"<<iRet<<endl;
}