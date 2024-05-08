#include <stdio.h>

int main() {
	int i=1,a;
	printf("Even numbers between 1 to 50 (inclusive):\n");
  scanf("%d",&a);
  while(i<=a+a)
	//for (i = 1; i <=a+a; i++) 
	{
	if(i%2 == 0) 
		//sleep(1);
		printf("\n%d\n", i);
		i++;
	}
	return 0;
}