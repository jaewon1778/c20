#include<stdio.h>

struct point{
	int x;
	int y;
};

struct circle{
	struct point center;
	int r;
};

int main()
{
	struct point p1, p2;
	struct circle c1, c2;
	
	printf("원1의 중심의 좌표와 반지름을 입력하세요(x y r): ");
	scanf("%d %d %d",&p1.x, &p1.y, &c1.r);

	printf("원2의 중심의 좌표와 반지름을 입력하세요(x y r): ");
	scanf("%d %d %d",&p2.x, &p2.y, &c2.r);

	if ((p1.x==p2.x)&&(p1.y==p2.y)&&(c1.r==c2.r))
		printf("원1과 원2는 같습니다\n");
	else
		printf("원1과 원2는 다릅니다\n");

	return 0;
}
