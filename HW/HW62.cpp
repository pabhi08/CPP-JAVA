//copy the contents of string and arrange it reverse into other string
#include<iostream>
using namespace std;

void strcopyrev(char *src,char *dest)
{
    int iLength=0;
    while(*src!='\0')
    {
        src++;
        iLength++;
    }
    src--;
    while(iLength!=0)
    {
        *dest=*src;
        src--;
        dest++;
        iLength--;
    }
    *dest='\0';

}



int main()
{
  char Arr[40];
  char Brr[40];

  cout<<"Enter the string :"<<endl;
  cin>>Arr;

  strcopyrev(Arr,Brr);
  cout<<"String in reverse order looks like :"<<Brr<<endl;

    return 0;
}