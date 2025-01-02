#include<stdio.h>

struct demo
{
int no;
struct demo *ptr;
    
};


int main()
{
struct demo head;

struct demo obj1;
struct demo obj2;
struct demo obj3;

obj1.no=11;
obj2.no=21;
obj3.no=51;

obj1.ptr=&obj2;
obj2.ptr=$obj3;
obj3.ptr=NULL;

head =&obj1;

printf("%d\n",obj1.no);
printf("%d\n",obj2.ptr);


}


// The above method of coonnecting the nodes is called self referential structure