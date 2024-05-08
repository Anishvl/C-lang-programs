/*
#include<stdio.h>  
  int main()    
{
  int a,b,c,d;
  printf("enter the number here");
  scanf("%d",&a);
while(d==1)
  {
  b=a/10;
  c=a%10;
  d=b*b+c*c;
    }
  printf("happy number");
  printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  
    return 0;  
    }   
*/
#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter the number here: ");
    scanf("%d", &a);

    d = a;

    while (d != 1 && d != 4) {
        int sum = 0;

        while (d > 0) {
            int digit = d % 10;
            sum += digit * digit;
            d /= 10;
        }

        d = sum;
    }

    if (d == 1) {
        printf("Happy number\n");
    } else {
        printf("Not a happy number\n");
    }

    printf("\nDeveloped and coded by\n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");

    return 0;
}
