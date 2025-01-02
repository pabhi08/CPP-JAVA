//singly linear linkedlist

import java.util.*;


class Node
{
    public int data;
    public Node next;  
    

    public Node(int no)
    {
        this.data= no;
        this.next=null;
        
    }

}


class SinglyCL
{
     public Node first;
     public Node last;
     public int iCount;

     public SinglyCL()
     {
        this.first=null;
        this.last=null;
        this.iCount=0;
     }

     public void Display()
     {
          System.out.println("Elements of Linked List are :");

          Node temp=first;

          while(temp!=null)
          {
            System.out.print("|"+temp.data+"|->");
            temp=temp.next;
          }
          System.out.println("null");
     }

     public int Count()
     {
        return this.iCount;
     }

     public void InsertFirst(int no)
     {
         Node newn=new Node(no);

         if((first==null)&&(last==null))
         {
            first=newn;
            last=newn;
         }
         else
         {
              newn.next=first;
              first=newn;
         }
         (last).next=first;
         iCount++;
     }

     public void InsertLast(int no)
     {
        //PNODE newn=(PNODE)malloc(sizeof(NODE));   C
         // PNODE newn=new NODE;    C++

        Node newn=new Node(no);     // Java

         if((first==null)&&(last==null))
         {
            first=newn;
            last=newn;
            

         }

         else
         {
                last.next=newn;
                last=last.next;
         }
         (last).next=first;
         iCount++;
     }

    /*  public void DeleteFirst()
     {
         if((first==null)&&(last==null))
         { 
            return;
         }
         else if(first==last)
         {
             first=null;  
             last=null;
         }
         else
         { 
            first=first.next;
            last.next=first;
           
          }
         iCount--;
     } */

    /*  public void DeleteLast()
     {
           if((first==null)&&(last==null))
         { 
            return;
         }
         else if(first==last)
         {
             first=null;  
             last=null;
         }
         else
         { 
             Node temp=first;

             while(temp.next!=last)
             {
                temp=temp.next;
             } 
            last=temp;
            last.next=first;
         }

         iCount--;
    } /*
 
    /*public void InsertAtPos(int no,int iPos)
     {
         int iSize=Count();

         if((iPos<1)||(iPos>iSize+1))
         {
            System.out.println("Invalid Position");
            return;
         }
         if(iPos==1)
         {
              InsertFirst(no);
         }
         else if (iPos==iSize+1)
         {
               InsertLast(no);
         }
         else
          { 
                Node temp=first;
                for(int iCnt=1;iCnt<iPos-1;iCnt++)
                {
                    temp=temp.next;
                }
                Node newn= new Node(no);
                newn.next=temp.next;
                temp.next=newn;
                
                iCount++;

         }
     }*/

     /* public void DeleteAtPos(int iPos)
     {
          int iSize=Count();

         if((iPos<1)||(iPos>iSize))
         {
            System.out.println("Invalid Position");
            return;
         }
         if(iPos==1)
         {
              DeleteFirst();
         }
         else if (iPos==iSize)
         {
               DeleteLast();
         }
         else
          { 
                Node temp=first;
                Node tempX=null;
                for(int iCnt=1;iCnt<iPos-1;iCnt++)
                {
                    temp=temp.next;
                }
                tempX=temp.next;
                temp.next=temp.next.next;
                
               
                iCount--;

         }
     } */

}


class Program453
{
    public static void main(String arg[])
    {
         SinglyCL obj=new SinglyCL();

          obj.InsertFirst(51);
          obj.InsertFirst(21);
          obj.InsertFirst(11);

          obj.InsertLast(101);
          obj.InsertLast(111);
          obj.InsertLast(121);
          obj.Display();
          System.out.println("Number of elements are :"+obj.Count());

         /* obj.InsertAtPos(55,4);
          obj.Display();
          System.out.println("Number of elements are :"+obj.Count());

        obj.DeleteAtPos(4);
        obj.Display();
          System.out.println("Number of elements are :"+obj.Count());

          obj.DeleteFirst();
          obj.DeleteLast();
           obj.Display();
          System.out.println("Number of elements are :"+obj.Count()); */


    }
}