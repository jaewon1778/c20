#include<stdio.h>
#include<math.h>


int main()
{
	float a,d,b;
	float get_height(float a,float d)
	{
		float b, Rd;
		Rd=d*(M_PI/180);
		
		b= a*sin(Rd);
		return b;
	}

	printf("변의 길이: ");
	scanf("%f",&a);
	printf("각도의 크기: ");
	scanf("%f",&d);
	b=get_height(a,d);
	printf("높이: %f\n",b);
	
	return 0;
}
