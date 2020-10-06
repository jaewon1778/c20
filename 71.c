#include<stdio.h>

int main(void)
{
	int n = 3;
	int i = 1;


	while (i*n <= 100)
	{
		printf("%d ", n*i);
		i++;
	}
	printf("\n");

	return 0;
}

