//accept an array from user and find the max element in it
#include<iostream>
using namespace std;


int main()
{
    int size;
    
    cout<<"Enter the size of array :"<<endl;
    cin>>size;

    int arr[size];

     cout<<"Enter the elements into an array "<<endl;
     for(int i=0;i<size;i++)
     {
        cin>>arr[i];
     }

     int max=arr[0];
     for(int iCnt=0;iCnt<size;iCnt++)
     {
        if(arr[iCnt]>arr[0])
        {
            max=arr[iCnt];
        }
     }

 cout<<"max element of array is "<<max<<endl;
 

}
