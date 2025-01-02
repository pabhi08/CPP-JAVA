//write a program which accept the marks and display the class//
//0-34        Fail 
//35-49       pass class
//50-69       second class
//60-74       first class
//75-100       first class with distinction 

#include<stdio.h>              // For printf,scanf

 
void DisplayClass(float fMarks)
{

if ((fMarks<0.0f)||(fMarks>100.0f))     //Filter
{
    printf("Invalid Input\n");
    printf("Enter the percentage in between 0 to 100\n");
    return;
}

    if((fMarks>=0.0f)&&(fMarks<35.0f))
    {
        printf("You are Fail\n");
    }
    else if((fMarks>=35.0f)&&(fMarks<50.0f))
    {
       printf("You got PassClass\n");   
    }
    else if((fMarks>=50.0f)&&(fMarks<60.0f))
    {
        printf("You got second Class\n");   
    }
    else if((fMarks>=60.0f)&&(fMarks<75.0f))
    {
        printf("You got first class\n"); 
    }
    else if((fMarks>=75.0f)&&(fMarks<=100.0f))
    {
        printf("You got first class with disntiction\n");
    }
}


int main()
{

float fValue =0.0f;

printf("Enter your percentage\n :  ");
scanf("%f",&fValue);

DisplayClass(fValue);
    
return 0;

}
