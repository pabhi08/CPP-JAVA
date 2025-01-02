// Input - :
//  Row : 6
// Column : 6 
// Output :
/*
*   a  a  a  a  a
b   *  b  b  b  b
c   c  *  c  c  c
d   d  d  *  d  d
e   e  e  e  *  e
f   f   f  f  f  *
*/

#include<stdio.h>

void Display(int iRow,int jColumn)
{
 int i=0;
 int j=0;
 char ch ='\0';


 if(iRow!=jColumn)   //Filter
 {
    printf("invalid matrix\n");
    return;
 }

 for(i=1,ch='a';i<=iRow;i++,ch++)   //outer
 {
    for(j=1;(j<=jColumn);j++)  //inner
    {
      if(i==j)
      {
        printf("*\t");
      } 
      else
      {
        printf("%c\t",ch);
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