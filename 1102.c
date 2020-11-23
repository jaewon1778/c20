#include<stdio.h>

void gmm(int arr[5], int *min, int *max);

int main()
{
	int arr[5] = {10,2,6,8,4};
	int min, max;

	gmm(arr, &min, &max);

	printf("min = %d  max = %d\n", min, max);

	return 0;
}

void gmm(int arr[5], int *min,int *max)
{
	int i;
	*min=arr[0];
	*max=arr[0];
	for (i=1; i<5; i++){
		if(arr[i]<*min)
			*min=arr[i];
		if(arr[i]>*max)
			*max=arr[i];
	}
}
