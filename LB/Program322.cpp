#include<iostream>
using namespace std;


typedef class node
{
    public :
    int data;
    struct node *next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
}PNODE,*PNODE;


class Stack
{
    private :
    PNODE First;
    int iCount;

    public : 
    Stack();
    void Push(int no);   //InsertFirst
    int Pop();            //DeleteFirst
    void Display();
    int Count();
};

 Stack :: Stack()
 {
    First=NULL;
    iCount=0;
 }
    void Stack :: Push(int no)    //Insert Last
    {
        PNODE newn= new NODE(no);
        if(First=NULL)  
        {
            First=newn;
           
        }
        else
        {
            PNODE temp=First;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;

        }
        iCount++;
    }

    int Stack :: Pop()   //Delete First        
    {
        int Value=0;
        if(iCount==0)
        {
           cout<<"stack is empty\n";
           return -1;
        }
        else if(iCount==1)
        {
            Value=First->data;
            delete First;
            First=NULL;
        }
        else
        {
            Value=First->data;
            PNODE temp=First;
            First=First->next;
            delete temp;

        }
        iCount--;
        return Value;
    }

    void Stack :: Display()
    {
        cout<<"Elements of Stack are : \n";
        PNODE temp=First;
        for(int icnt=1;icnt<=iCount;icnt++)
        {
            cout<<temp->data<<"\n";
            temp=temp->next;
        }
    }
    int Stack ::Count()
    {
        return iCount;
    }

int main()
{
    return 0;
}