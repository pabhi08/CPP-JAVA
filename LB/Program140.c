// Input - :
//  Row : 6
// Column : 6 
// Output :
/*
A
A  B
A  B  C
A  B  C  D
A  B  C  D  E
A  B  C  D  E  F
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

 for(i=1;i<=iRow;i++)   //outer
 {
    for(j=1,ch='A';(j<=i);j++,ch++)  //inner
    {
       printf("%c\t",ch);
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