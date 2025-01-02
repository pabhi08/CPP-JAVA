#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE,*PNODE;

class DoublyCL
{
    private :
    PNODE First;
    PNODE Last;
    int iCount;

public :
DoublyCL();
~DoublyCL();

void InsertFirst(int ino);
void InsertLast(int ino);
void InsertAtPos(int ino,int iPos);

void DeleteFirst();
void DeleteLast();
void DeleteAtPos(int iPos);

void Display();
int Count();

};




int main()
{



    return 0;
}