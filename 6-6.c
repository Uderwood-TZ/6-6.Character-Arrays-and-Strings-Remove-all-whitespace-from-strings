#include "stdio.h"

void fun(char *str) ;

main()
{
  char str[81] ;
  gets(str) ;
  fun(str) ;
  printf("%s",str) ;
}

/* ����������д�� */
void fun(char *str)
{
int i=0,j=0;
    while(str[i])
    {
        if(str[i]!=' ')
        {str[j]=str[i];
        j++;
        }
        i++;
    }
    str[j]='\0';
}