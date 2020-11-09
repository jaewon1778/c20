#include<stdio.h>
#define ROWS 3
#define COLS 5

double aver(int list[][COLS],int s);

int main()
{
	int a[ROWS][COLS]={{87,98,80,76,3},
		{99,89,90,90,0},
		{65,68,50,49,0}
		};
	
	printf("중간고사 평균: %lf\n",aver(a,0));
	printf("기말고사 평균: %lf\n",aver(a,1));
	printf("기말과제 평균: %lf\n",aver(a,2));
	printf("퀴즈 평균: %lf\n",aver(a,3));

	return 0;
}
double aver(int list[][COLS],int s)
{
	double sum=0,avg=0;
	for(int i=0; i<ROWS; i++)
		sum+=list[i][s];
	
	avg=sum/ROWS;
	return avg;
}

