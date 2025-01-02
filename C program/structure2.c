#include<stdio.h>

struct demo 
{
int i;
float f;
int j;
};

int main()
{
struct demo obj1 ={11,90.90,51};

struct demo*ptr =&obj1;

obj1.i=11;  //direct member access operator
ptr->j=51;   // -> Indirect member access operator
ptr->f =90.90;


printf("%d\n",obj1.i);
printf("%f\n",ptr->f);

return 0;

}