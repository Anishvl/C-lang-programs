#include <stdio.h>
//#include "gstio"
// int main(void)
void main() {
   char x;
  int a,b;
 printf("\nenter the function to perform the operation");
scanf("%c",&x);
  printf("\nenter the numbers");
  printf("\nenter the first number");
  scanf("%d",&a);

  ////////////////////////////////////////////////////////
  printf("\nenter the second number");
  scanf("%d",&b);
 ///////////////////////////////////////////////////////////

  if(x=='+')
  {
    printf("\nthe sun of %d and %d is %d",a,b,a+b);
    printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  }
 else if(x== '-')
  {
    printf("\nthe sun of %d and %d is %d",a,b,a-b);
    printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  }
  else if(x== '*')
  {
    printf("\nthe sun of %d and %d is %d",a,b,a*b);
    printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  }
  else if(x=='/')
  {
    printf("\nthe sun of %d and %d is %d",a,b,a/b);
    printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  }
  else if(x=='%')
  {
    printf("\nthe sun of %d and %d is %d",a,b,a%b);
    printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  }
  else
  {
    printf("\nchoosi enter chey bro");
    printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  }

  return 0;
  }