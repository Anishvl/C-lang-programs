 #include<stdio.h>  
  int main()    
{
  int a,b,c,d,sum=0;
  printf("\nenter the number here\n");
  scanf("%d",&a);
  b=(a*a);
  while(b>0){
    c=b%10;
    sum=c;
    b=b/10;
  }
    if(sum==a)
  {
    printf("\nthe number %d is a neon number\nprintf\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl\n",a);
  }
  else
  {
    printf("\nthe number %d is not a neon number\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl\n",a);
  }
    
    
    return 0;  
    }   