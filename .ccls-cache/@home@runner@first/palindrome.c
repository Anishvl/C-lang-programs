     #include<stdio.h>  
    int main()    
    {    
    int n,    r,sum=0,t,i;
    printf("enter the number=");    
    scanf("%d",&n);    
    t=n;    
    while(n>0)    
    {    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
    }    
    if(t==sum)    
    printf("palindrome number "); 
      printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
    else    
    printf("not palindrome");   
      printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
    return 0;  
    }   