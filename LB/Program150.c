// Input - :
//  Row : 6
// Column : 6 
// Output :

/*
*
*  *
*  *  *
*  *  *  *
*  *  *  *
*  *  *
*  *
* 





*/

#include<stdio.h>

void Display(int iRow,int jColumn)
{
 int i=0;
 int j=0;
 

 if(iRow!=jColumn)   //Filter
 {
    printf("invalid matrix\n");
    return;
 }
 
 for(i=1;i<=iRow;i++)   //outer
 {
    for(j=1;j<=jColumn;j++)  //inner
    {
     if((j<=i))  //Diagonal with lower triangle
      {
        printf("*\t");
      }
     
    }     
      printf("\n");
      
 }

//    1       2        3
    for(i = iRow; i>= 1; i--)   // Outer    // 4    3   2   1   
    {  //    1         2       3 
        for(j = 1; j <= i; j++)  // Inner
        { 
            printf("*\t");
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