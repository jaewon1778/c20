#include<stdio.h>

int three(int n, int m)
{
	if (m==10)
		return 0;
	else	
		printf("%d*%d=%d\n",n,m,n*m);
		return three(n,m+1);
}

int main()
{
	three(3,1);
	return 0;
}
	
