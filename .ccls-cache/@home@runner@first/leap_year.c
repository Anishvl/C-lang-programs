#include <stdio.h>
void main() {
  int a, b, i = 0;
  printf("\nTo check whether the given year is leap year or not\n");
  printf("\nenter the year to know the year is a leap year or not\n");
  scanf("%d",&a);
  if(a%400==0)
  {
    printf("\nthe year is a leap year\n");
  }
  else if (a%100==0)
  {
    printf("\nthe year is a leap year\n");
  }
  else if (a%4==0)
  {
    printf("\nthe year is a leap year\n");
  }
  else
  {
    printf("\nthe entered year is not a leap year\n");
  }
}