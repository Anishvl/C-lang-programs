/*#include<stdio.h>  
#include<string.h>
#include<stdlib.h>
//#include"quizbotfail.c"

void swap(int *,int *);
int main ()
{
  int a, b;
 
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  printf("Before Swapping : a=%d,b=%d\n",a,b);
  swap(&a,&b);
  printf("After Swapping : a=%d,b=%d\n",a,b);
  return 0;
}
 
void swap(int *a,int *b){
    int c;
    c = *a;
    *a=*b;
    *b=c;
}