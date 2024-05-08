    #include<stdio.h>  
    int main()    
    {    
    int n,r,sum=0,t,i;
      printf("\nselect the option to go on function\n");
      sleep(2);
      printf("\n1.for palindrome of a number\n2.for reverse of a number\n");
      scanf("%d",&i);
      if(i==1)
      {
    printf("enter the number");    
    scanf("%d",&n);    
    t=n;    
    while(n>0)    
    {    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
    }    
    if(t==sum)  
    {
      sleep(2);
    printf("\npalindrome number\n "); 
      printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
      }
    else
    {
      sleep(2);
    printf("\nnot palindrome\n");   
      printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
      }
      }
else if (i==2)
{
  printf("\nenter a number to reverse\n");
  scanf("%d",&n);
  r=n%10;
  t=n/10;
  sleep(2);
  printf("\nthe reverse of number is %d%d\n",r,t);
  printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
}
else
{
  sleep(2);
  printf("please enter the correct number\n");
  printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
}
    return 0;  
    }   
