#include<iostream>
using namespace std;


class ArrayX
{
   public :
         int *Arr;
         int iSize;

  
    ArrayX(int );
    ~ArrayX();
    void Accept();
    void Display();
};

ArrayX :: ArrayX(int iNo)
{
         cout<<"Inside the constructor to allocate memory\n";
    this->iSize=iNo;
    this->Arr=new int [iSize];
}

ArrayX :: ~ArrayX()
{
     cout<<"Inside the destructor to deallocate memory\n";
    delete []Arr;
}

 void  ArrayX ::Accept()
{
         cout<<"inside the accept method\n";
    cout<<"Enter the elements :\n";\
    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

 void  ArrayX ::Display()
{
         cout<<"Inside the Display Method\n";
      cout<<" elements of array are :\n";\
    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";

    }
    cout<<"\n";
}


int main()
{
     int iValue=0;
     cout<<"Inside the main\n";
     cout<<"Enter the size of array :\n";
     cin>>iValue;

     ArrayX obj(iValue);
     obj.Accept();
     obj.Display();

          cout<<"End of the main\n";

    return 0;
}