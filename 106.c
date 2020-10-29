#include<stdio.h>
#define SIZE 5

int get_average(int arr[])
{
	int i;
	int sum=0;
	for (i=0; i<SIZE; i++)
		sum += arr[i];
	return sum/SIZE;
}


int main()
{
	int arr[SIZE]={1,2,3,4,5};
	printf("평균값= %d\n",get_average(arr));

	return 0;
}

	

