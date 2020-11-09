#include<stdio.h>
#define SIZE 5

void get_square(int arr[])
{
	int i;

	for (i=0; i<SIZE; i++)
		arr[i] *= arr[i];
}



int main()
{
	int i;
	int arr[SIZE]={1,2,3,4,5};
	get_square(arr);
	
	printf("arr^2=[");
	for (i=0; i<SIZE; i++)
		printf("%d ",arr[i]);
	
	printf("]\n");
	return 0;
}
