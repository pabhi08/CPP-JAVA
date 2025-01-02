//to find the average of all postive elements in array

#include <iostream>
using namespace std;

int main()
{   
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int cnt = 0;
    int x = 0;
    // int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            x = x + arr[i];
            cnt++;
        }
        else
        {
        
            continue;
        }
        
    }
        int avg =( x )/ cnt;
        cout << avg << endl;
}