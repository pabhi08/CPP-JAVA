#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream filestream ("test.txt");
    if(filestream.is_open())
    {
        filestream<<"Welcome to the new world of technology\n";
        filestream.close();
    }
    else
    {
        cout<<"Error in opening the file ";
    }
      return 0;
}