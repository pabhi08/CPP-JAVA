#include<stdio.h>

struct demo
{
int no;
char ch;   
float f;
int i;

};

int main ()
{
struct demo obj;

printf("%d\n",sizeof(obj));

return 0;

}