// Input - :
//  Row : 6
// Column : 6 
// Output :
/*
*  *  *  #
*  *  #  * 
*  #   *  *
#  *  *  *   
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
//     1     2    3
 for(i=iRow;i>=1;i--)   //outer
 {
 //      1    2   3     
    for(j=1;j<=jColumn;j++)  //inner
    {
      if(i==j) //4
      {
        printf("#\t");
      }
     else
      {
         printf("*\t");
      }
      }
    
     printf("\n");
     printf("\n");   //row madhe spaces vadhel
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