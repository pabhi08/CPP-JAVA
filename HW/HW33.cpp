// display the table of anynumber

#include<iostream>
using namespace std;

void Display(int Val,int no)
{
 int Cnt;

 for(Cnt=1;Cnt<=Val;Cnt++)
 {
    cout<<Cnt*no<<"\n";
   
 }
}





int main()
{
    int value;
    int no;
    cout<<"Enter the value"<<endl;
    cin>>value;
    cin>>no;

    Display(value,no);

}