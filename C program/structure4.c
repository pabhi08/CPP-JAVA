#include<stdio.h>

struct demo
{
int i;
float f;
int arr[4];

};

int main()
{

struct demo obj;
obj.i=10;
obj.f=90.76;

obj.arr[0]=11;
obj.arr[1]=21;
obj.arr[2]=31;
obj.arr[3]=41;


printf("%d",obj.i);
printf("%d",obj.f);
printf("%d",obj.arr[2]);
printf("%d",obj.arr[3]);


}