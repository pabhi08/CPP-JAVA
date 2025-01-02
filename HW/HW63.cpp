// concatenate the contents of a first string to the end of second string

#include<iostream>
using namespace std;

void strcontcatenate(char *src,char *dest)
{
    // Take the dest till it reaches \0
    while(*dest!='\0')
    {
        dest++;
    }
    *dest=' ';
    dest++;

    //as the dest as reached towards its end so now copy the contents of 1 string
    while (*src!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
    
}



int main()
{
    char Arr[30];
    char Brr[30]="Hello";

    cout<<"Enter the string :"<<endl;
    cin>>Arr;

    strcontcatenate(Arr,Brr);

    cout<<"String after conctenating is:"<<Brr<<endl;
    return 0;
}