// Try to convert the given string from upper to lower case
#include <iostream>
using namespace std;

void strlwr(char *str)
{
    while (*str != '\0')
    {
        if ((*str>='A')&&(*str<='Z'))
        {
            *str = *str+32; for convert
        }
        
        str++;
    }
}

int main()
{
    char Arr[50];
    cout << "Enter the string :" << endl;
    // scanf("%[^'\n']s",Arr);
    cin>>Arr;

    strlwr(Arr);

    cout<<"String After Editing is:"<<Arr<<endl;

    return 0;
}