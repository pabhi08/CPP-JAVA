#include<iostream>
using namespace std;

class Perfect
{
public :
int iNo;


Perfect(int X)
{
    cout<<"Inside the constructor"<<"\n";
    iNo=X;
    

}

bool CheckPerfect()
{
    int iSum=0;
    int iCnt=0;
    
    for(iCnt=0;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
           iSum=iSum+iCnt;
        }
        if((iSum>iNo))
        {
            break;
        }
    }

    if(iSum==iNo)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

};




int main()
{
    int iValue=0;
    bool bRet=false;

     cout<<"Enter the number"<<"\n";
     cin>>iValue;
  
  Perfect pobj(iValue);
  
  bRet = pobj.CheckPerfect();

  if(bRet==true)
  {
    cout<<" %d  is a perfect number"<<bRet<<"\n";
  }
  else
{
    cout<<"%d is  not a perfect number"<<bRet<<"\n";
}


    return 0;
}