#include<stdio.h>

int Hanoi(int n)
{
	if (n==1) return 1;
	
	esle:
		return 2*Hanoi(n-1)+1;
}

int main()
{
	int n=5;
	printf("원판 %d개의 움직임 수: %d\n",n,Hanoi(n));
	return 0;
}
