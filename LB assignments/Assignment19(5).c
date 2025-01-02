/*
Input - iRow =4  ,iCol=4
Output -1 2 3 4
          2 3 4
            3 4
              4 
*/  

#include<stdio.h>

 void Pattern(int iRow,int iCol)
 {
    int i=0;
    int j=0;

        
    for(i=iRow;i>=1;i--)
     {
        for(j=iCol;j>=1;j--)
        {
            if(i>=j)
            {
                printf("%d\t",i);
                
            }
            else
            {
                printf(" \t");
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