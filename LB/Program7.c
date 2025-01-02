//write a program which checks whether number is divisble by 3 and 5 .

#include<stdio.h>              // For printf,scanf
#include <stdbool.h>           //For bool datatype

////////////////////////////////////////////
//Function name : CheckDivisible
//Input : Integer 
//Output : Boolean
//Description :  Check whether input is divisible by 3 and 5
// Author Name - Abhishek  Rajshekhar Patil
//Date : 25/04/2023
/////////////////////////////////////////////////

bool CheckDivisible(int ino)
{
if(((ino%3)==0) && ((ino%5)==0))
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

printf(" enter the number to check whether it is divisble by 3 and 5\n : ");
scanf("%d",&iValue);

bRet = CheckDivisible(iValue);      //Function call

if(bRet==true)
{
    printf("%d is  completely divisible by 3 and 5 \n",iValue);

}
 else
 {
        printf("%d is not divisible by 3 and 5\n",iValue);
 }
    
return 0;
}

/*
Logical Operators :
 
 1 : Logical AND    (&&)

 2 : Logical OR      (||)

------------------------------------------------
Expression1      Expression2    &&      ||
------------------------------------------------
true               true        true     true
true               false       false    true
false              true        false    true
false              false       false    false




*/