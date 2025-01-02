#include<stdio.h>

struct demo
{
int i;
float f;

};

int main()
{

// arr is a one dimensional array which contain 4 elements and each of type struct demo 
//where demo is a structure which contains element of type integer and float 
 struct demo arr[4];


 arr[0].i=11;
 arr[0].f=90.60;

 arr[1].i=21;
 arr[1].f=91.60;

 arr[2].i=31;
 arr[2].f=94.56;

 arr[3].i=41;
  arr[3].f=89.56;

printf("%d\n",arr[2].i);
printf("%f\n",arr[3].f);


return 0;

}