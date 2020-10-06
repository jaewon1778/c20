#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int im=50;
	int gl=200;
	int i;
	int wins=0;

	for (i=0;i<100;i++){
		int c = im;
		while(c>0&&c<gl){
			if(((double)rand()/RAND_MAX)<0.5)c++;
			else c--;
		}
		if (c == gl) wins++;
	}

	printf("초기 금액 $%d \n", im);
	printf("목표 금액 $%d\n",gl);
	printf("100번 중에서 %d번 성공\n", wins);
	return 0;
}

