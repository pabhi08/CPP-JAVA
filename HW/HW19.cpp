#include<iostream>
using namespace std;

int CheckEvenCount(int no)
{
    int Cnt=0;
     int iDig;

     if(no<0)//updater
     {
        no=-no;
     }
     
     while(no!=0)
     {
        iDig=no%10;
        if((iDig%2)==0)
        {
            Cnt++;
        }
        no=no/10;
     }
       return Cnt;
}




int main()
{
    int no;
   cout<<"Enter the number :"<<endl;
   cin>>no;

   int iRet=CheckEvenCount(no);
    cout<<"Even numbers are :"<<iRet<<endl;
    return 0;
}