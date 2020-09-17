#include<stdio.h>

int main(void)
{
	int h;
	int w;
	float area;
	
	printf("높이:");
	scanf("%d",&h);

	printf("밑변:");
	scanf("%d",&w);

	area=h*w*0.5;

	printf("넓이: %lf\n",area);

	return 0;
}
