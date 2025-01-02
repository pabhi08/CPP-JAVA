#include<stdio.h>
#include<stdlib.h>     


int main()
{
   int Arr[5];    //static memory allocation
    
    printf("Enter the number of elements\n :");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Elements of array are\n :");
    printf("%d",Arr[0]);
      printf("%d",Arr[1]);
        printf("%d",Arr[2]);
          printf("%d",Arr[3]);
            printf("%d",Arr[4]);
    
    
    
    
    
    
    
    return 0;
}