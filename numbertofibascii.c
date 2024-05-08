    #include<stdio.h>  
    int main()    
    {    
  int a,b=1,c=0,d,i;
      printf("\nenter upto which to print fibon ascii values\n");
      scanf("%d",&a);
      //printf("\n%d\n%d",c,b);
      for(i=2;i<a;i++)
      {
       d=b+c;
        c=b;
        b=d;
      }
        printf("\n%d\n",d);
     printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl\n");
    return 0;  
      }    