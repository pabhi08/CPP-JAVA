//write a program which checks whether number is even or odd .

#include<stdio.h>              // For printf,scanf
#include <stdbool.h>           //For bool datatype

////////////////////////////////////////////
//Function name : CheckEvenOdd
//Input : Integer 
//Output : Boolean
//Description :  Check whether input is even or odd
// Author Name - Abhishek  Rajshekhar Patil
//Date : 25/04/2023
/////////////////////////////////////////////////

bool CheckEvenOdd(int ino)
{

if ((ino%2)==0)
{
   return true;
}

else 
{
   return false;
}

}

///////////////////////////////////////////
//Entry point function//
///////////////////////////////////

int main()
{

int iValue = 0;       //Variable to accept input
bool bRet= false;     // Variable to accept return value (false(0) is a default value for bool)

printf("Please enter the number to check whether it is even or odd\n : ");
scanf("%d",&iValue);

bRet = CheckEvenOdd(iValue);      //Function call

if(bRet==true)
{
    printf("%d is Even number\n",iValue);

}
 else
 {
        printf("%d is Odd number\n",iValue);
 }
    
return 0;
}



/*

    11*2
    11/2  -  just to divide the number and get the value.
    11%2   - To check the remainder of a number (either 0 or 1)





*/