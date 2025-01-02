//take string from user and replace the capital from small letter
#include<stdio.h>


void  strtoggleX(char *str)
{
    while (*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
             *str =*str - 32;    //editing the string by _
        }
         else if((*str>='A')&&(*str<='Z'))
        {
             *str =*str + 32;    //editing the string by _
        }
      
        str++;
    }
}



int main()
{
  
  char Arr[20];
  


  printf("Enter the string\n :");
  scanf("%[^'\n']s",Arr);

 

   strtoggleX(Arr);
  
  printf("String after editing is %s\n",Arr);


    return 0;
}