#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 45
int main(void)
{
	int i;

	srand((unsigned)time(NULL));
	for (i = 0; i<10; i++)
		printf("%d ",1+rand()%100);
	printf("\n");

	return 0;
}

