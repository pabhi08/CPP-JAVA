#include<iostream>
using namespace std;

void Display(int Arr[],int Size)
{
    int iCnt=0;
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

void Display(double Arr[],double Size)
{
   int  iCnt=0;
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
       int A[]={10,20,30,40,50};
       Display(A,5);

        double B[]={10.23,20.45,30.56,40.45,50.56};
       Display(B,5);

      return 0;
}