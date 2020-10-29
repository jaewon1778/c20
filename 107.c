#include<stdio.h>
#define SIZE 5

int get_min(int arr[])
{
	int i;
	int min=arr[0];
	for (i=1; i<SIZE; i++){
		if (arr[i]<min)
			min=arr[i];
	}
	return min;
}

int get_max(int arr[])
{
	int i;
	int max=arr[0];
	for (i=1; i<SIZE; i++){
		if (arr[i]>max)
			max=arr[i];
	}
	return max;
}

int main()
{
	int arr[SIZE]={1,2,3,4,5};
	
	printf("최대= %d\n",get_max(arr));	
	printf("최소= %d\n",get_min(arr));

	return 0;
}

