#include<stdio.h>

double asd(double list[]);

int main()
{
	double list[5]={1,2,3,4.3,5.5};

	asd(list);

	for (int i=0; i<5; i++)
	{
		printf("%lf\n",list[i]);
	}

	return 0;

}
	
double asd(double list[])
{
	for(int i=0; i<5; i++)
	{
		list[i] += 0.2;
	}
	return list;
}
