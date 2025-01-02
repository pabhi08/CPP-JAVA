// accept and array from user and a no of user and search for the last occurence of the element 

#include <iostream>
using namespace std;
#define ERR_NOTFOUND -1

int SearchLastOccurence(int Arr[],int iSize,int no)
{
    int Cnt=0;
    int iPos=0;
    for(Cnt=0;Cnt<iSize;Cnt++)
    {
        if(Arr[Cnt]==no)
        {
            iPos=Cnt;
        }
    }
    return iPos;
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


  int iRet=SearchLastOccurence(arr,iSize,no);
  if(iRet==-1)
  {
    cout<<"There is no such element"<<endl;
  }
  else
  {
    cout<<"The index of the last occurence of the element is "<<iRet<<endl;
  }

    return 0;
}