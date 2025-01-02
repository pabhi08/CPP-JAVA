//calculate the summation of given numbers // check average of the digits

#include<iostream>
using namespace std;

/*
int Summation(int no)
{
     int iDig;
     int iSum=0;
     while(no!=0)
     {
        iDig=no%10;
        iSum=iSum+iDig;
        no=no/10;
     }
     return iSum;
}
*/

float DigitsAvg(int no)
{
    int iDig;
    int iSum=0;
    int Cnt=0;

    while(no!=0)
    {
        iDig=no%10;
        iSum=iSum+iDig;
        Cnt++;
        no=no/10;
    }

    return float(iSum)/float(Cnt);
}


int main()
{
    int no;

    cout<<"Enter the numbers :"<<endl;
    cin>>no;

    float fRet=DigitsAvg(no);
    cout<<"Avg of digits  is:"<<fRet<<endl;
    return 0;
}