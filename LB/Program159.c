#include<stdio.h>
#include<string.h>   //inbuilt function





int main()
{
   char Arr[10];
   int iRet=0;
 
    printf("Enter string\n :");
    scanf("%[^'\n']s",Arr);     //Special scanf

   iRet=strlen(Arr);

   printf("Length of string is : %d\n",iRet);



    return 0;
}