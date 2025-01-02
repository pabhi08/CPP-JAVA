//accpet an array from the user and display it

#include<iostream>
using namespace std;

int main()
{ 
     int size;
     cout<<"Enter the size of array"<<endl;
     cin>>size;
      
      int arr[size];
      cout<<"Enter the elements of array"<<endl;
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }
  
     cout<<"elements of array are :"<<endl;
      for (int i = 0; i < size; i++)
      {
        cout<<arr[i]<<endl;
      }
      

    return 0;
}