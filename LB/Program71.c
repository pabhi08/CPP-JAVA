#include<stdio.h>
#include<stdlib.h>     //new lib for dynamic memory allocation



int main()
{
     int iSize =0;
     int *ptr=NULL;

     printf("Enter the number of elements\n :");   //1
     scanf("%d",&iSize);

     ptr= (int*)malloc(iSize*sizeof(int));       //2
     if(ptr==NULL)
     {
        printf("Unable to allocate memory\n");
         return -1;
     }

     printf("Memory allocated successfully\n");

    return 0;
}