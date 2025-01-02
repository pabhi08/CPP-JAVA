#include<iostream>
using namespace std;

void Display(int Val)
{
 int Cnt;
 for(Cnt=1;Cnt<=Val;Cnt++)
 {
    cout<<"\t"<<Cnt-1;
 }
}





int main()
{
    int value;
    cout<<"Enter the value"<<endl;
    cin>>value;

    Display(value);

}