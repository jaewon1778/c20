#include<stdio.h>

int main (void)
{
	int n,i;
	
	for (n=2;n<10;n++,n++)
	{
		for (i=1;i<10;i++)
			printf("%d*%d = %d  ",n,i,n*i);
		printf("\n");
	}

	return 0;
}
