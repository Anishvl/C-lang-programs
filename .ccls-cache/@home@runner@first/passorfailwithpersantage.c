#include <stdio.h>
// int main(void)
void main() {
  int m, p, c;
  int t;


  printf("enter phy marks");
    scanf("%d",&p);
    printf("enter che marks");
  scanf("%d",&c);
    printf("enter mat marks");
  scanf("%d",&m);
    (p>=50)?printf("\nphy passed with %d",p):printf("\nphy failed with %d",p);
    (c>=50)?printf("\nche passed with %d",c):printf("\nche failed with %d",c);
    (m>=50)?printf("\nmat passed with %d",m):printf("\nmat failed with %d",m);
  t=m+p+c/300*100;
  printf("\nthe persantage of all subjects is %d out of 200",t);
  if(t<=100)
    printf("\nsection is c ");
  else if(t>139||t<159)
    printf("\nsection is b");
    else if(t>160||t<179)
    printf("\nsection is A");
  else
  printf("\nthe section is A+");
  
printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  return 0;
  }