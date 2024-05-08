#include<stdio.h>
void main()
{
  int a,i,j;
  printf("enter how many rows");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
    {
      for(j=1;j<=i;j++)
        {
          printf("*");
        }
      printf("\n");
    }
}