#include<stdio.h>
#include<stdlib.h>

typedef struct Node 
{
   int data;
   struct Node *next;
}NODE,*PNODE,**PPNODE;


void Display(PNODE Head)
{
    printf("Elements of Linked List are\n");
    while(Head!=NULL)
    {
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt=0;
    while(Head!=NULL)
    {
        iCnt++;
        Head=Head->next;
    }
    return iCnt;

}
void InsertFirst(PPNODE Head,int no)
{
    PNODE newn =NULL;     //new node initalisation 
    newn=(PNODE)malloc(sizeof(NODE));   //memory allocation for new node(newn)

    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL)
    {
         *Head=newn;
    }
    else
    {
           newn->next=*Head;
           *Head=newn;
    }


}

void InsertLast(PPNODE Head,int no)
{
    PNODE newn =NULL;     //new node initalisation 
    newn=(PNODE)malloc(sizeof(NODE));   //memory allocation for new node(newn)

    PNODE temp=*Head;

    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL)
    {
         *Head=newn;
    }
    else
    {
       while(temp->next!=NULL)
       {
          temp=temp->next;
       }
       temp->next = newn;
    }
}

void InsertAtPos(PPNODE Head,int no ,int Pos)
{
   int iLength=0;
   iLength=Count(*Head);

   PNODE newn=NULL;
   PNODE temp=*Head;
   int iCnt=0;

   if((Pos<1)||(Pos>iLength+1))
   {
       printf("Invalid Position\n");
       return;
   }
   if(Pos==1)
   {
      InsertFirst(Head,no);
   }
   else if(Pos==iLength+1)
   {
      InsertLast(Head,no);
   }
   else 
   {
       newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;

        for(iCnt=0;iCnt<Pos-1;iCnt++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next=newn;

   }

   
   
 

}

void DeleteFirst(PPNODE Head)
{
PNODE temp=*Head;
if(*Head==NULL)//LL is empty
{
    return;

}
else if((*Head)->next==NULL)  //LL contains at least one node
{
   free(*Head);
   *Head=NULL;
}
else   //LL contains more than one node
{
   *Head=(*Head)->next;
   free(temp);
}
}

void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;
if(*Head==NULL)//LL is empty
{
    return;

}
else if((*Head)->next==NULL)  //LL contains at least one node
{
   free(*Head);
   *Head=NULL;
}
else   //LL contains more than one node
{
   while(temp->next->next!= NULL)
   {
    temp=temp->next;
   }  
   free(temp->next);  //last node nighun jain 
   temp->next=NULL;
}

}

void DeleteAtPos(PPNODE Head,int Pos)
{
    int iLength=0;
   iLength=Count(*Head);

   PNODE newn=NULL;
   PNODE temp=*Head;
   PNODE tempX=NULL;
   int iCnt=0;

   if((Pos<1)||(Pos>iLength))
   {
       printf("Invalid Position\n");
       return;
   }
   if(Pos==1)
   {
      DeleteFirst(Head);
   }
   else if(Pos==iLength)
   {
      DeleteLast(Head);
   }
   else 
   {
      
        for(iCnt=0;iCnt<Pos-1;iCnt++)
        {
            temp=temp->next;
        }
         tempX=temp->next;

        temp->next=temp->next->next;  //sequence is important
        free(tempX);

        

   }

   

}



int main()
{
  PNODE First=NULL;
  int iRet=0;

    InsertLast(&First, 11);
    InsertLast(&First, 21);
    InsertLast(&First, 51);
    InsertLast(&First, 101);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertFirst(&First,10);
    InsertFirst(&First,20);
    Display(First);
     iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    
    InsertAtPos(&First, 25, 5);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

 DeleteAtPos(&First, 5);
  Display(First);
  iRet = Count(First);
  printf("Number of nodes are : %d\n",iRet);


    DeleteFirst(&First);
    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

     DeleteLast(&First);
     Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);




    return 0;
}