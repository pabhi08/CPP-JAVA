// return the position of the Last occurence of the element in an array
#include <iostream>
using namespace std;

int LastOccurence(char *str, char Search)
{
    int Cnt = 1;
    int iPos=0;
    while (*str != '\0')
    {
        if (*str == Search)
        {
            iPos=Cnt;
            
        }
        str++;
        Cnt++;
    }
    return iPos;
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

     iRet = LastOccurence(Arr, SChar);
    cout<<"Position of the Last occurence of the element is :"<<iRet<<endl;
}