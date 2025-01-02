// check whether the given year is leap year or not

#include<iostream>
using namespace std;

CheckYear(int year)
{
    if(year%400==0)
    return true;
    if(year%100==0)
    return false;
     if(year%4==0)
    return true;
    return false;
}




int main()
{
    int year;
    cout<<"Enter the year:"<<endl;
    cin>>year;
    
    CheckYear(year)?cout<<"Leap Year":
                    cout<<"Not a leap year";

                    return 0;
}