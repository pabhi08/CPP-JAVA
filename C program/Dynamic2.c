#include<stdio.h>
#include<stdlib.h>


int main()
{
int Arr[5];
int size =0;

int *ptr =NULL;

printf("Enter the size of array");
scanf("%d",&size);

ptr = (int*)calloc(sizeof(int),size);

free(ptr);


return 0;

}