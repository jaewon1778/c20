#include<stdio.h>

int main()
{
	int a,b;
	float x;
	
	printf("정수 a를 입력:");
	scanf("%d",&a);
	printf("정수 b를 입력:");
	scanf("%d",&b);	
	x=a/(double)b;
	
	printf("a/b=%f\n",x);

	return 0;

}
