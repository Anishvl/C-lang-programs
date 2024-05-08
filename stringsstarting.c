#include<stdio.h>
#include<strings.h>
void ending()
{
   printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
}
void display(char str[]);
void main()
{
  char str[10];
 // int le;
  printf("\nenter the values in string to display\n");
  scanf("%s[^\n]",str);
  //printf("\n%s\n",str);
  //le=str;
  printf("\ntranferring to the function please wait\n");
  sleep(1);
   printf("\nloading...\n");
      sleep(1);
  display(str);
  
  printf("%d",strlen(str));
  ending();
}
void display(char str[])
{
  printf("\nthe word is %s\n",str);
}
