#include<stdio.h>
void even(int);
void main()
{
  int a,i=1;
  printf("\nenter a number here to get the even numbers\n");
  scanf("%d",&a);
  if(a>i)
  {
  even(a);
    }
  else
  {
    printf("\ninvalid input\n");
  }
  
}
void even(int a)
{
  int i=1,b;
    while(i<=a+a)
    {
if(i%2==0)
  printf("\n%d\n",i);
      i++;
      
    }
  
}
