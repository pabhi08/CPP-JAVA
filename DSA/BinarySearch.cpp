#include <iostream>
using namespace std;

int main()
{
    int Arr[50];
    int start, end, mid, target, size;

    cout << "Enter the size of array: " << endl;
    cin >> size;

    cout << "Enter the values into array into sorted array :" << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << "Arr[" << i << "]=";
        cin >> Arr[i];
    }

    cout << "Enter the element you want to search :"<< endl;
    cin >> target;

    start = 0;
    end = size - 1;

   // Binary Search
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (Arr[mid] == target)
        {
            cout << target << "Element found at :" << Arr[mid] << endl;
            break;
        }
        else if (Arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (Arr[mid] > target)
        {
            end = mid - 1;
        }
    }
    cout << "Element not found" << endl;

    return 0;
}
