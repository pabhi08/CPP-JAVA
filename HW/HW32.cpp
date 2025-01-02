#include<iostream>
using namespace std;

void Display(int Val)
{
 int Cnt;
 char ch='A';
 for(Cnt=1;Cnt<=Val;Cnt++)
 {
    cout<<"\t"<<ch;
    ch++;
 }
}





int main()
{
    int value;
    cout<<"Enter the value"<<endl;
    cin>>value;

    Display(value);

}