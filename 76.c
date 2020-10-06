#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)

{
	srand(time(NULL));
	int a=(rand()%100)+1;

	int g;
	int t=0;

	do {
		printf("정답을 추측:");
		scanf("%d",&g);
		t++;
		if (g > a)
			printf("제시한 정수가 더 높습니다.\n");
		if (g < a)
			printf("제시한 정수가 더 낮습니다.\n");
	}while(g!=a);
		printf("축하합니다. 시도횟수=%d\n",t);

	return 0;
}
	
	
