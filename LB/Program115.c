// Input - :
//  Row : 3
// Column : 5 
// Output :
//  1   1   1   1  1 
//  2   2   2   2  2
//  3   3   3   3  3 


#include<stdio.h>

void Display(int iRow,int jColumn)
{
 int i=0;
 int j=0;

 for(i=1;i<=iRow;i++)   //outer
 {
    for(j=1;j<=jColumn;j++)  //inner
    {
        printf("%d\t",j);
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