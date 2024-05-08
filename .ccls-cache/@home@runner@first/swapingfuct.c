#include<stdio.h>
int swap(int*,int*);
void main()
{
  int a,b;
  printf("\nswaping program\n");
  printf("\nenter the first number to swap\n");
  scanf("%d",&a);
  printf("\nenter the second number to swap\n");
  scanf("%d",&b);
  printf("\nthe numbers before swaping is %d and %d\n",a,b);
  swap(&a,&b);
  printf("\nthe numbers after swaping is %d and %d\n",a,b);
  
}
int swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}