#include <stdio.h>
#include<math.h>
//#include "gstio"
// int main(void)
void main() {
   char x;
  int a,b;
 printf("\nenter the function to perform the operation");
scanf("%c",&x);
  if(x=='+')
  {
    printf("\nthe operation is available\n");
  }
  else if(x=='-')
  {
    printf("\nthe operation is available\n");
  }
  else if(x=='/')
  {
    printf("\nthe operation is available\n");
  }else if(x=='*')
  {
    printf("\nthe operation is available\n");
  }else if(x=='%')
  {
    printf("\nthe operation is available\n");
  }else 
  {
    printf("\nthe operation is not available\n");
    goto end;
  }
  printf("\nenter the numbers\n");
  printf("\nenter the first number");
  scanf("%d",&a);

  ////////////////////////////////////////////////////////
  printf("\nenter the second number\n");
  scanf("%d",&b);


 switch(x)
   {
     case'+':{printf("\nthe sum of two numbers is %d",a+b);
       goto end1;}
     case'-':{printf("\nthe total is %d",a-b);
       goto end1;}
     case'/':{printf("\n the total is %d",a/b);
       goto end1;}
     case'%':{printf("\n the total is %d",a%b);
       goto end1;}
     case'*':{printf("\n the total is %d",a*b);
       goto end1;}
     default:printf("\nchoosi enter chey bro");break;
   }
    end1:
  printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  end:
printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  
  return 0;
  }