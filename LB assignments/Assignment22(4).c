#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
   
   while(*str!='\0')
   {
    if((*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U')||(*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
    { 
        
        return true;
        
    }
    else 
    {  
        return false;
    }
   }
}



int main()
{
char Arr[20];
bool bRet=false;

printf("Enter the string\n :");
scanf("%[^'\n']s",Arr);

bRet= CheckVowel(Arr);

if(bRet==true)
{
    printf("Vowel is present\n ");
}
else 
{
    printf("there is no vowel\n");
}


    return 0;
}