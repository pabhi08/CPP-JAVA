#include<stdio.h>

struct demo
{
int i;
float f;

};

struct hello
{
int no;
float x;
struct demo dobj;   //nested structure

};


int main()
{
struct hello hobj;
return 0;

}