// accept and array from user and a no of user and return  the index of that number

#include <iostream>
using namespace std;

int SearchFirstOccurence(int Arr[],int iSize,int no)
{
    int Cnt=0;
    for(Cnt=0;Cnt<iSize;Cnt++)
    {
        if(Arr[Cnt]==no)
        {
            break;
        }
    }
    if(Cnt==iSize)
    {
       return -1;
    }
    else
    {
        return Cnt;
    }
}


int main()
{
    // int *ptr=NULL;
    int iSize;
    int no;
   
 

//  ptr = (int*)malloc(sizeof(int)*iSize);

cout<<"enter the size of array"<<endl;
cin>>iSize;

 int arr[iSize];
cout<<"Enter the element into the array"<<endl;
   for(int i=0;i<iSize;i++)
   {
        cin>>arr[i];
   }

cout<<"enter the element u want to search"<<endl;
cin>>no;


  int iRet=SearchFirstOccurence(arr,iSize,no);
  if(iRet==-1)
  {
    cout<<"There is no such element"<<endl;
  }
  else
  {
    cout<<"The index of the element is "<<iRet<<endl;
  }

    return 0;
}