#include<stdio.h>
#include<math.h>

int main(void)
{
	double a,b,c,dis;

	printf("계수 a:");
	scanf("%lf",&a);

	printf("계수 b:");
	scanf("%lf",&b);
	
	printf("계수 c:");
	scanf("%lf",&c);
	

	A:
		if (a==0) goto B;
		goto X;
	B:
		if (b==0) goto C;
		goto Y;
	C:
		if (c==0)
		{ 
			printf("방정식의 근을 알 수 없다.\n");
			goto end;
		}
		printf("방정식이 성립하지 않는다.\n");
		goto end;
	X:
		dis = (b*b - 4.0*a*c);
		if (dis >=0)
		{
			printf("방정식의 근은 %f입니다.\n",(-b+sqrt(dis))/(2.0*a));
			printf("방정식의 근은 %f입니다.\n",(-b-sqrt(dis))/(2.0*a));
			goto end;
		}
		printf("실근이 존재하지 않습니다.\n");
		goto end;
	Y:
		printf("방정식의 근은 %f입니다.\n",-c/b);
	end:
		return 0;
}
