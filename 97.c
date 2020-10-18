#include<stdio.h>

int rbit(int n)
{
	if (n==1) return 1;
	if (n==2) return 2;
	return rbit(n-1)+rbit(n-2);
}

int main()
{
	int n;
	printf("몇개월 후? ");
	scanf("%d",&n);
	printf("%d개월후 %d쌍\n",n,rbit(n));
	return 0;
}
