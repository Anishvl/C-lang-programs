#include<stdio.h>
int square(int);
int main()

{
  int a,b;
  printf("enter a number to square");
  scanf("%d",&a);
  b=square(a);
  //square(b);
  printf("the square of number is %d",b);
}
int square(int a)
{
  int b;
   b=a*a;
  return b;
}