#include<iostream>

using namespace std;

float Area(float radius,float PI=3.14f)
{
float ans=0;
ans=PI*radius*radius;
return ans;

}

int main ()
{

float R=0.0f;
float fRet=0.0f;
cout<<"Enter the radius :"<<"\n";
cin>>R;

fRet=Area(R);
cout<<"Area of circle is :"<<fRet<<"\n";


fRet=Area(R,7.14f);
cout<<"Area of circle is :"<<fRet<<"\n";
    return 0;
}