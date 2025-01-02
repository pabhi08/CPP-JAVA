// Input - :
//  Row : 6
// Column : 6 
// Output :
/*
*  *  *  *  *  *
*              *
*              *
*              *
*              *
*  *  *  *  *  *

*/

#include<stdio.h>

void Display(int iRow,int jColumn)
{
 int i=0;
 int j=0;


 for(i=1;i<=iRow;i++)   //outer
 {
    for(j=1;j<=jColumn;j++)  //inner
    {
      if((i==1)||(i==iRow)||(j==1)||(j==jColumn))
      {
        printf("*\t");
      }
      else
      {
        printf(" \t");   //space is given between in the brackets
      }
    }
     printf("\n");
 }


}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter the number of rows\n :");
    scanf("%d",&iValue1);

    printf("Enter the number of columns\n :");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;

}