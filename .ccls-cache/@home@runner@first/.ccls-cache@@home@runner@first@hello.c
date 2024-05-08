#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
  char a[10], d;
  int b, c;
  printf("\nwelcome to Amazon chat bot\n");
  sleep(1);
  printf("\n\nenter your name here\n");
  scanf("%[^\n]", &a);
  sleep(2);
  printf("\nloading...\n");
  sleep(2);
  printf("\nwelcome %s\n\nselect the option from here\n", a);
  sleep(2);
  printf("\nloading...\n");
  sleep(2);
  printf("\n1.for order related\n2. for subcription\n3.end the chat");
  scanf("%d", &b);
  if (b == 1) {
    printf("\nplease select your order from the list\n");
    printf("\nloading...\n");
    sleep(2);
    printf("\n1.oneplus 10R\n2.fossil watch\n3.to end the chat\n");
    scanf("%d", &c);
    if (c == 1) {
      printf("\nloading...\n");
      sleep(2);
      printf("\nyour order will be delivered by NOV 13th\n");

    } else if (c == 2) {
      printf("\nloading...\n");
      sleep(2);
      printf("\nyour order will be delivered by NOV 20th\n");
      printf("\nloading...\n");
      sleep(2);

    } else {
      printf("\nloading...\n");
      sleep(2);
    }
  } else if (b = 2) {
    printf("\nloading...\n");
    sleep(2);
    printf("\nyour subscription is valid till NOV 13th,2023\n");

  } else {
    printf("\nthe chat has ended ended\n");
  }

  return 0;
}