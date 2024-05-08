#include<stdio.h>
void main()
{
  int n,e=0,i=0;
  printf("\nenter the number you need even numbers\n");
  scanf("%d",&n);
 // fflush(stdin);
  if(i<n)
  {
  while(i<=n+n)
    {
     n=(i%2==0);
      printf("%d",n);
      i++;
    }
    }
  else
  {
    printf("\ninvalid number\n");
  }
}