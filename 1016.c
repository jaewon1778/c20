#include<stdio.h>

#define YEARS 3
#define PRO 5


int sum(int grade[][PRO]);

int main()
{
	int sales[YEARS][PRO]={{1,2,3},{4,5,6},{7,8,9}};
	int total;

	total=sum(sales);
	printf("총매출은 %d입니다.\n",total);

	return 0;
}

int sum(int grade[][PRO])
{
	int y,p;
	int to=0;

	for(y=0;y<YEARS;y++)
		for(p=0;p<PRO;p++)
			to+=grade[y][p];
	return to;
}
