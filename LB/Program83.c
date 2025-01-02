//accept n no from user and find the max no from the no

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
  
   int iMax=Arr[0];
   int iCnt=0;
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
   }
   return iMax;
}

int main()
{
    int *ptr=NULL;
    int iSize=0;
    int iCnt=0;
    int iRet=0;
    
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
   
   iRet = Maximum(ptr,iSize);
   printf("Largest element is :%d\n",iRet);

   free(ptr);

    return 0;
}