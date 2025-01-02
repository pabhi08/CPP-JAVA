#include<iostream>

using namespace std;


void test(int x)
{
    try
    {
        if(x==1) throw x;
        else if (x==0) throw 'x';
        else if (x==-1) throw 1.0;
        else 
        {
            cout<<x<<"is not an exception"<<endl;
        }
    }
    catch(int i)
    {
        cout<<"It is an integer type of an exception"<<endl;
    }
    catch(char c)
    {
        cout<<"It is a character type of an exception"<<endl;
    }
    catch(float f)
    {
        cout<<"It is a float type of an exception"<<endl;
    }
    
}


int main()
{
int ch;
cout<<"Testing of multiple catch blocks"<<endl;


   cout<<"x==1"<<endl;
   test(1);

   cout<<"x==0"<<endl;
   test(0);

   cout<<"x==-1"<<endl;
   test(-1);

    return 0;
}
