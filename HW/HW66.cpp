// Check whether given string is palindrome or not

#include<iostream>
using namespace std;

bool CheckPalindrome(char *str)
{
    char *start=NULL;
    char *end=NULL;
    
    start=str;
    end=str;
    

    while(*end!='\0')
    {
          end++;
    }
    end--;
    while(start<end)
    {
        if(*start!=*end)
        {
            break;
        }
        start++;
        end--;
    }
    if(start<end)
    {
        return false;
    }
    else
    {
        return true;
    }

}



int main()
{
    char Arr[30];
    

    cout<<"Enter the string :"<<endl;
    cin>>Arr;

   bool bRet= CheckPalindrome(Arr);
   if(bRet==true)
   {
     cout<<"strings are palindrome"<<endl;
   }
   else
   {
    cout<<"strings are not palindrome"<<endl;
   }
   
   return 0;

}