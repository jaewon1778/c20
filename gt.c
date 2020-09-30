#include<stdio.h>

int main()
{
	float x,y,z,a;

	printf("중간 기말 과제 점수를 입력:");
	scanf("%f %f %f",&x,&y,&z);

	a = 30*x/60 + 30*y/70 + 40*z/50;

	printf("변환점수는 %f입니다.\n",a);

	return 0;
}

