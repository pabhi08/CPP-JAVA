#include<iostream>
#include<vector>
using namespace std;

template<class T>
class VectorContainer
{
  public :
  vector<T> vec;

  public:
    void addelements( T elements)
    {
          vec.push_back(elements);
    }
 
    void display()
    {
        cout<<"Elements are :"<<endl;
        for(const T &elements :vec)
        {
            cout<<elements<<endl;
        }
        cout<<endl;
    }
};

int main()
{
    VectorContainer<int> iv;
    iv.addelements(10);
    iv.addelements(20);
    iv.display();
    VectorContainer<double> dv;
    dv.addelements(12.68);
    dv.addelements(23.45);
    dv.display();
    return 0;
}