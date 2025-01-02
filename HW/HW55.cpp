// Try to edit the string given by the user
#include <iostream>
using namespace std;

void EditString(char *str)
{
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            *str = '*';
        }
        str++;
    }
}

int main()
{
    char Arr[30];
    cout << "Enter the string :" << endl;
    scanf("%[^'\n']s",Arr);

    EditString(Arr);

    cout<<"String After Editing is:"<<Arr<<endl;

    return 0;
}