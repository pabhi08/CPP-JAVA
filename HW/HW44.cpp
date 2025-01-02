// accept a mix of characters and numbers from users and check whether number exist or not
#include<iostream>
using namespace std;

bool CheckDigit( char cval)
{
    if((cval>='0')&&(cval<'9'))
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
    char c='\0';
    bool bret;
   cout<<"Enter the key :"<<endl;
   cin>>c;

   bret= CheckDigit(c);
   if(bret==true)
   {
        cout<<"Digits are present"<<endl;
   }
   else
   {
     cout<<"Digits are not present"<<endl;
   }


    return 0;
}