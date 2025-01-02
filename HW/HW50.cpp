// Accept a string from user and determines the length of spaces in it

#include <iostream>
using namespace std;

int strLenCheckSpace(char *str)
{
    int Cnt = 0;
    while (*str != '\0')
    {
        if (*str==' ')
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
    //cin >>Arr;
     scanf("%[^'\n']s",Arr); //There is a special scanf function which can even accept the spaces
    //  getline(cin,Arr);
    iRet = strLenCheckSpace(Arr);
    cout << "Length of Spaces  is :" << iRet << endl;
}