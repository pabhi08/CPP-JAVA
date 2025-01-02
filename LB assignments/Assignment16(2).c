/*
Input - iRow =4  ,iCol=3
Output - A B C
         A B C
         A B C
         A B C
*/  

#include<stdio.h>

 void Pattern(int iRow,int iCol)
 {
    int i=0;
    int j=0;
    char ch1='\0';
    char ch2='\0';
    
    for(i=1,ch2='A';i<=iRow;i++,ch2++)
     {
        for(j=1,ch1='a';j<=iCol;j++,ch1++)
        {
           if((i%2)==0)
           {
            printf("%c\t",ch1);
           }
           else
           {
                printf("%c\t",ch2);
           }
        }
        printf("\n");
     }
 }

int main()
{
   int iValue1=0,iValue2=0;

   printf("Enter the number of row\n");
   scanf("%d",&iValue1);

   printf("Enter the number of column\n");
   scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);

    return 0;
}