#include<stdio.h>


int main()
{
	int arr[5]={2,4,6,8,10};
	int *p;
	int sum=0;
	p=arr;
	for (int i=0; i<5; i++){
		sum+=p[i];
	}

	printf("합계 = %d\n",sum);
	return 0;
}


