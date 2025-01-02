#include<stdio.h>

int main()
{

int no =11;
 int *iptr= &no;

 double d = 90.80;
 double *dptr= &d;

printf("%d\n",*iptr);
printf("%f\n",*dptr);

printf("%d\n", sizeof(*iptr));
printf("%f\n",sizeof(*dptr));

return 0;

}