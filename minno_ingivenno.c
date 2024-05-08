#include <stdio.h>
int main() {
  int a, b, c = 0;
  printf("\nFind minimum among three numbers.");
  printf("\nenter three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a<b)
  {
   if(a<c)
   {
     printf("\n%d  is a minimum number\n",a);
   }
    else
   {
     printf("\n%d is a minimum number\n",c);
   }
  }
 else if(a>b)
  {
   if(b<c)
   {
     printf("\n%d  is a minimum number\n",b);
   }
    else
   {
     printf("\n%d is a minimum number\n",c);
   }
  }
  else 
 {
   printf("\n%d is a minimum number\n",c);
 }
  
  }