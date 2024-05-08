#include<stdio.h>
int evenodd(int);
int main()

{
  int a,c;
  printf("\nswaping program using functions\n");
  printf("enter a number to square");
  scanf("%d",&a);
 c= evenodd(a);
 printf("%d",c);
  return 0;
  }
int evenodd(int b)
int c;
{
  if(b%2==0)
  {
    printf("\n%d even number \n",b);
    }
  else
  {
    printf("\nodd number\n");
  }
  return b;
}