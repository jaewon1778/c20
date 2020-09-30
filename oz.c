#include<stdio.h>

int main(void)

{
	int x;

	printf("정수를 입력:");
	scanf("%d",&x);

	printf("%d\n",(x%2==0)?1:0);

	return 0;
}
