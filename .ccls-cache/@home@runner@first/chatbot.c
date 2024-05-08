#include<stdio.h>
#include<string.h>
#include<stdlib.h>
  void main()    
{
  char a[10],d;
  int b,c;
  printf("\nwelcome to Anishvl chat bot\n");
  sleep(1);
  printf("\n\nenter your name here\n");
  scanf("%[^\n]",&a);
  sleep(2);
  printf("\nloading...\n");
  sleep(2);
  printf("welcome %s\n select the option from here\n",a);
  sleep(2);
  printf("\nloading...\n");
  sleep(5);
  printf("\n1.for order related\n2. for subcription\n3.end the chat");
  scanf("%d",&b);
  if(b==1)
  {
    printf("\nplease select your order from the list\n");
    printf("\nloading...\n");
    sleep(5);
    printf("\n1.oneplus 10R\n2.fossil watch\n3.to end the chat\n");
    scanf("%d",&c);
    if(c==1)
    {
      printf("\nloading...\n");
      sleep(5);
      printf("\nyour order will be delivered by NOV 13th\n");
       printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
    }
    else if(c==2)
    {
      printf("\nloading...\n");
      sleep(4);
       printf("\nyour order will be delivered by NOV 20th\n");
      printf("\nloading...\n");
      sleep(2);
        printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
    }
    else
    {
      printf("\nloading...\n");
      sleep(3);
      printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
    }
  }  
    else if(b=2)
    {
      printf("\nloading...\n");
     sleep(5);
printf("\nyour subscription is valid till NOV 13th,2023\n");
     printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
    }
  else
  {
printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl");
  }
  
  
    return 0;  
    }   