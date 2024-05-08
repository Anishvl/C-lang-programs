#include "gstio.h"
#include <stdio.h>
// int main(void)
void main() {
  int b,a,i=1;
  //int t;
  printf("enter the table");
    scanf("%d",&a);
  anish: 
  b=a*i;
  printf("%d*%d=%d\n",a,i,b);
  i++;
  if(i<=10)
  goto anish;
  else
    printf("the table is over");
  printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  return 0;
}