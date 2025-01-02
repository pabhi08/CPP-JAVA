#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s;
    ifstream filestream ("HW6.cpp");
    if(filestream.is_open())
    {
       while(getline(filestream, s))
       {
          cout<<s<<endl;
       }
        filestream.close();
    }
    else
    {
        cout<<"Error file is unable to ooen ";
    }
      return 0;
}