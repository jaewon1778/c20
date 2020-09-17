#include <stdio.h>

int main(void)
{
	int st;
	float A;
	float B;
	float C;

	printf("학생수를 입력하세요:");
	scanf("%d",&st);
	
	A=st*0.2;
	B=st*0.8-A;
	C=st-A-B;
	printf("A: %f\nB: %f\nC: %f\n",A,B,C);

	return 0;
}
