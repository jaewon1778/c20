#include<stdio.h>
#define SIZE 5

double srt(double list[]);

int main()
{

	int i; 
	double time[SIZE];
	double rec;


	for (i=0; i<SIZE; i++)
	{
		printf("학생%d:",i+1);
		scanf("%lf",&rec);
		time[i]=rec;
	}
	srt(time);

	return 0;	
}

double srt(double list[])
{
	int i,j,least;
	double temp;
	for(i=0; i<SIZE-1;i++)
	{
		least=i;
		for(j=i+1;j<SIZE;j++)
			if(list[j]<list[least])
				least=j;

		temp=list[i];
		list[i]=list[least];
		list[least]=temp;
	}
	
	for(i=0;i<SIZE;i++)
		printf("%d등 %lf\n",i+1,list[i]);
	
}

