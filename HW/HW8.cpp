#include<iostream>
using namespace std;

class Student
{
    public :
    string name;
    int age;
    int rollno;
    long telno;

    void Student_details(string n,int a,int r,long t)
    {
        name=n;
        age=a;
        rollno=r;
        if(Checktelno(t))
        {
          telno=t;  
        }
    }

      bool Checktelno(long t)
      {
        if(t>9999999)
        {
            throw"number should not exceed than 10 digit";
            return false;
        }
        return true;
      }

      void display()
      {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Roll no :"<<rollno<<endl;
        cout<<"Telephone no :"<<telno<<endl;
      }
};

int main()
{
    Student s;
    try
    {
       s.Student_details("Abhi",20,140,7598);
       s.display();
       s.Student_details("ssss",12,323,92927292);
       s.display();  
    }
    catch(const char *e)
    {
        cout<<"Exception  is:"<<e<<endl;
    }
    return 0;
}