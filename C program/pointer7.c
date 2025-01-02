#include<stdio.h>

int addition(int no1,int no2)
{
int ans =0;
ans = no1+no2;
return ans;

}

int main()
{
int value1=10,value2=11;
int ret =0;
//ret = addition(value1,value2);
 int (*ptr) (int,int);
 ptr = addition;

 ret = ptr(value1,value2);
 printf("%d",ret);

 return 0;

}