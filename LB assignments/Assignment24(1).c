// give a string and take a char from user and find that char in that string

#include<stdio.h>
#include<stdbool.h>

bool CheckChar( char *str,char ch)
{
   while(*str!='\0')
   {
    
      if(*str==ch)
      {
        printf("%s",str);
           return true;
      }
      else
      {
           return false;
      }
       str++;
   }

}


int main()
{
char Arr[20];
char cValue='\0';
bool bRet=false;

printf("Enter the string\n  :");
scanf("%[^'\n']s",Arr);

printf("Enter the Character\n  :");
scanf("%c",cValue);

bRet = CheckChar(Arr,cValue);

if(bRet==true)
{
   printf("character is present\n ");

}
else
{
      printf("Character is not present\n");
}


    return 0;
}