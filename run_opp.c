#include<stdio.h>

int main()
{
	int x;
	int y;
	float pi;
	float t;

	pi=3.14;

	printf("속력을 입력하세요\n판다:");
	scanf("%d",&x);

	printf("말:");
	scanf("%d",&y);

	t=5*2*pi/(y-x);
	printf("t=%f\n",t);
}
