#include<stdio.h>
int main()
{
  char s[20];
  int i;
  printf("enter the name:");
  gets(s);
  for(i=0;s[i]!='\0';i++);
  printf("the length of %s is %d",s,i);
  }
