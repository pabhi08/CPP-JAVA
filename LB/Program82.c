#include<stdio.h>
#include<stdlib.h>

void fun(int Arr[],int iLength)
{

}

int main()
{
    int *ptr=NULL;
    int iSize=0;
    int iCnt=0;
    
    printf("Enter the number of elements\n :");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize*sizeof(int));
   
   printf("Enter the elements\n :");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&ptr[iCnt]);       //Considering ptr as an array
   }

   printf("Elements of the array are\n :");

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
    printf("%d\n",ptr[iCnt]);
   }
   fun(ptr,iSize);

   free(ptr);

    return 0;
}