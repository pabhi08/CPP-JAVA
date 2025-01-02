#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
int arr [5];  // static memory allocation

int *p=NULL;
p=(int*)malloc(5*sizeof (int));   // Dynamic memory allocation using malloc

int *q=NULL;
q=(int*)calloc(5,sizepf(int));   //Dynamic memory allocation using calloc

int*X=NULL;
X=new int [5];

free(p);      // In C
free(q);      // In C   

delete [] X;   //In C++
// [] is used before X because to delete the whole array//

    return 0;
}