#include<stdio.h>

int main()
{
int arr [5]={10,20,30,40,50};

int *p = &(arr[1]);

int *q=&(arr[3]);

printf("%d\n",*p);
printf("%d\n",*q);


}