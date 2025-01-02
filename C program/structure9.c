#include<stdio.h>

struct hello
{
int no;
int x;
struct demo
{
int i;
float f;

}dobj1,dobj2;    // Multiple objects are declared
}hobj;

int main()
{
hobj.no=10;
hobj.x=20;

hobj.dobj1.i=30;
hobj.dobj1.f=40.0;

hobj.dobj2.i=50;
hobj.dobj2.f=60.0;

 printf("%d\n",dobj1.i);
 printf("%d\n"dobj2.f);

return 0;
}