#include<stdio.h>

union demo
{
int no;
double d;
float f;
};

int main()
{
union demo obj;

printf("%d\n",sizeof(obj));

}