#include<stdio.h>  
#include<string.h>
#include<stdlib.h>

void main(void)    
    {    int b;
     static int a=0;
      char n[10],c,d;
      printf("\nwelcome to quiz bot\n");
     /* sleep(2);
      printf("\nloading\n");
      sleep(1);
      printf("\nloading.\n");
       sleep(1);
      printf("\nloading..\n");
       sleep(1);
      printf("\nloading...\n");
      */
       printf("\nenter your name here\n");
      scanf("%s",&n);
      //sleep(1);
      printf("\nloading\n");
      sleep(1);
      /*printf("\nloading.\n");
       sleep(1);
      printf("\nloading..\n");
       sleep(1);
      printf("\nloading...\n");
      sleep(1);*/
      printf("\nwelcome %s to the quiz bot\n",n);
      printf("\npress '1' to proceed with the quiz\n");
      scanf("%d[^\n]",&b);
      if (b == 1)
      {
        printf("\nthe quiz starts in 3\n");
        sleep(1);
        printf("\nthe quiz starts in 2\n");
        sleep(1);
        printf("\nthe quiz starts in 1\n");
        sleep(1);
        printf("\nthe questions are on to the screen now!!\n");
        printf("\nwho is the father of computer?\n");
        printf("\na.charles babbage\nb.Anishvl\nc.sagar Akula\nd.Kiran.s\n");
        printf("\nenter your answer below\n");
        scanf("%c[^\n]",&c);
        if (c=='a')
        { ++a;
          printf("Score = %d",a);
          sleep(2);
          }
        else
        {
        sleep(2);
        }
        printf("\nheres the second question on to the screen now!!\n");
         printf("\nloading\n");
      sleep(1);
        printf("\nwho is the founder of c lang?\n");
        printf("\na.Dennis Ritchie\nb.Anishvl\nc.sagar            Akula\nd.Kiran.s\n");
        printf("\nenter your answer below\n");
        scanf("%c[^\n]",&d);
        printf("%c",d);
         if (d=='a')
        { ++a;
               printf("Score = %d",a);   
          sleep(1);
          sleep(2);
          }
        }
    
       printf("\nthankyou for opening");
        printf("\nthe total score is %d\n",a);
        printf("\nthankyou for participating in quiz hope you like it.\n");
      sleep(3);
      printf("\ndeveloped and coded by \n\n@\t/^\\|\\|I$|-| \\/|_\n\t\t\t\t©anishvl\n");
    //return 0;  
      }   