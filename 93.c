#include<stdio.h>

long fac(int n)
{
	printf("factorial(%d)\n",n);

	if(n <= 1) return 1;
	else return n*fac(n-1);
}

int main(void)
{
	int n=0;
	long f;

	printf("정수를 입력: ");
	scanf("%d",&n);
	printf("%d!은 %ld입니다.\n",n,fac(n));
	return 0;
}

