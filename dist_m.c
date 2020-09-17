#include<stdio.h>
int main(void)
{
	double light_speed = 300000;
	double distance = 149600000;

	double time;
	int m;
	float s;

	time = distance / light_speed;
	m=time/60.0;
	s=time-m*60;

	printf("빛의 속도는 %fkm/s \n",light_speed);
	printf("태양과 지구와의 거리 %fkm \n",distance);
	printf("도달 시간은%d분 %f초\n", m, s);

	return 0;
}
