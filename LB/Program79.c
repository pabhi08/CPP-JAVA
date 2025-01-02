
#include<stdio.h>   //IO
#include<stdlib.h>   //Memory Management

//void Demo(int *Arr,int iLength)
int EvenCount(int Arr[],int iLength)
{

  int iCounter=0;
//Step 5: perform the opearation on array
 
   for(iCnt=0;iCnt<iLength;iCnt++)
{
    if((Arr[iCnt%2])==0)
    {
        iCounter++;
    }

}
return iCounter;
}



int main()          //Entry point function
{
   int iSize=0;     //To store size of array
   int *ptr=NULL;    //To store address of array
   int iCnt=0;
   int iRet=0;
   
//step 1 : Accept the number of elements 
   printf("Enter the number of elements\n :");
   scanf("%d",&iSize);

//Step 2  : Allocate memory dynamically
   ptr=(int*)malloc(iSize * sizeof(int));

//step 3 : Accept the value from user
printf("Enter the elements\n : ");

for(iCnt=0;iCnt<iSize;iCnt++)
{
    scanf("%d",&ptr[iCnt]);
}
   
   printf("Elements of array are \n : ");
   
   for(iCnt=0;iCnt<iSize;iCnt++)
{
    printf("%d\n",ptr[iCnt]);
}

//Step 4:Pass the array to the function

iRet = EvenCount(ptr,iSize);    //Demo(400,4) -internally
printf("Even Elements are : %d\n",iRet);

//Step 6 :Deallocate the memory of array
 free (ptr);
    
    return 0;
}