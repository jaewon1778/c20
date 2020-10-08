#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{

	void sdice()
	{
		int i;
		srand((unsigned)time(NULL));
		i=1+(rand()%10);
		if (i<=6)
			printf("%d\n",i);
		else if (i<=8)
			printf("1\n");
		else
			printf("2\n");
	}

	sdice();
	
	return 0;
}
