//Display the ASCII  table is

#include<stdio.h>


void DisplayASCII()
{
    int iCnt=0;
  printf("ASCII table is\n");
    for(iCnt=0;iCnt<=127;iCnt++)
    {
        printf("%c\t %d\n ",iCnt,iCnt);
    }
}


int main()
{


   DisplayASCII();
 return 0;
}