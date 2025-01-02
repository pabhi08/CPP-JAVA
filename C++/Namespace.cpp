#include<iostream>
using namespace std;

namespace Marvellous
{
class Demo
{

public :
int A;
int B;

Demo(int i=10,int j=20)    //Paramterised constructor with default arguments
{
A=i;
B=j;

}
};
}

//using namespace Marvellous;


namespace Infosystems
{
class Demo
{

public :
int A;
int B;


}
};

using namespace Infosystems;


int main()
{

//Marvellous::Demo obj1;
Demo obj1;
cout<<"Inside main"<<"\n";
    return 0;
}