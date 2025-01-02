#include<stdio.h>

struct hello
{
int no;
int x;
struct demo
{
    int i;
    float f;
}dobj;
}hobj;

int main()
{

hobj.no=10;
hobj.x=20;
hobj.dobj.i=30;
hobj.dobj.f=40.0;

return 0;
}