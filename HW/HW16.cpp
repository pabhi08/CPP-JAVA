// To check whether a number exists or not in the user entered number 
//eg  - 7432    check 6 is present or not

#include<iostream>
using namespace std;

bool CheckDigit(int num)
{
    int iDig;
    while ((num!=0))
    {
        iDig=num%10;
        if(iDig==6)
        {
            break;
        }
        num=num/10;
    }
    if(iDig==6)
    {
        return true;
    }
    else
    {
        return false;
    }
  
}


int main()
{
   int num;
   cout<<"Enter the number :"<<endl;
   cin>>num;

   bool bRet=CheckDigit(num);
   if(bRet==true)
   {
    cout<<"6 is present in the given number"<<endl;
   }
   else
   {
    cout<<"6 is not present in the given number"<<endl;
   }

}
