//Accept char from user and check whether it is capital or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if((cValue>='a')&&(cValue<='z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}




int main()
{
  char ch='\0';
  int bRet=0;

  printf("Enter character\n");
  scanf("%c",&ch);

  bRet=CheckSmall(ch);

  if(bRet==true)
  {
    printf("%c is  a small letter\n",ch);
  }
  else
  {
     printf("%c is not a small letter\n",ch);
  }
    return 0;
}