//accept n no from user and take another no and check whether that another no is in array or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{

 
  int iCnt=0;
  bool bflag=false;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
   
     if(Arr[iCnt]==iNo)
    {
        bflag = true;
        break;
    }
    return bflag;
  }

  
}

int main()
{
    int *ptr=NULL;
    int iSize=0;
    int iCnt=0;
   int iValue=0;
   bool bRet=0;
    
    printf("Enter the number of elements\n :");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize*sizeof(int));
   
   printf("Enter the elements\n :");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&ptr[iCnt]);       //Considering ptr as an array
   }
    
    printf("Enter the element that you want to search\n :");
    scanf("%d",&iValue);
  
    printf("Elements of the array are\n :");

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
    printf("%d\n",ptr[iCnt]);
   }
   
    bRet = Search(ptr,iSize,iValue);
   if(bRet==true)
   {
     printf("%d is in present in array\n :");
   }
   else
   {
    printf("%d is not present in array\n :");
   }
   

   free(ptr);

    return 0;
}