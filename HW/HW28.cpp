// Accept an array from user and search particular element in it and check whether it is present or not
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of array :" << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the elements into an array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int search;
    cout << "Enter the number you want to search: " << endl;
    cin >> search;

    for (int iCnt = 0; iCnt < size; iCnt++)
    {
        if (arr[iCnt] == search)
        {
            cout << search << " " << "Element is present in your array" << endl;
        }
        
    }
    //cout << search << " " << "Element is not present in your array" << endl;
        
    return 0;
}