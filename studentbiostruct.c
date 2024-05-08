#include<stdio.h>
#include<string.h>
struct student
{
char name[50];
int age;
char gender[6];
};
void main()
{
  struct student s;
  printf("enter students name here");
  scanf("%s",s.name);
  printf("enter the age of the student");
  scanf("%d",&s.age);
  
  
  printf("\n%s\n",s.name);
  printf("\n%d\n",s.age);
}
