#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         // 1

    newn->data = no;                            // 2
    newn->next = NULL;

    if(*Head == NULL)                           // 3
    {
        *Head = newn;                           // 4
    }
    else
    {
        newn->next = *Head;                     // 5
        *Head = newn;                           // 6
    }
}


void DisplayI(PNODE Head)
{
    
    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

void DisplayR(PNODE Head)
{
    
    if(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
        DisplayR(Head);

    }
    printf("NULL \n");
}

int CountI(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}

int CountR(PNODE Head)
{
     static int iCount = 0;   //to preserve the count each time

    if(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
        CountR(Head);
    }
    return iCount;
}



int main()
{
    PNODE First = NULL;
   

   InsertFirst(&First,50);
     InsertFirst(&First,40);
       InsertFirst(&First,30);
         InsertFirst(&First,20);
           InsertFirst(&First,10);

           DisplayR();
           CountR()

    return 0;
}


