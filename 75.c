#include<stdio.h>

int main(void)

{
	int v=10;
	int t;
	int f=4;
	for (t=1;t<=7;t++)
	{
		printf("%d시간후 %d마리\n",t,v*f);
		f=f*4;
	}

	return 0;
}

