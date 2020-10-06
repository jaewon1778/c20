#include<stdio.h>

int main(void)
{
	int n;
	int i;

for (n=1; n<10; n++)
	{
		for (i=1; i<10; i++)
			printf("%d*%d = %d  ",n,i,n*i);
		printf("\n");
	}

	return 0;
}

