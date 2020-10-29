#include<stdio.h>


int plus10(int arr[], int n)
{
	int i;
	for (i=(n+1); i<10; i++)
		if(arr[n]+arr[i] >= 10)
			printf("arr[%d]=%d, arr[%d]=%d\n",n,arr[n],i,arr[i]);
	return 0;
}


int main()
{
	int arr[10]={3,8,1,1,2,5,2,4,3,6};
	int i;

	for (i=0; i<10; i++)
		plus10(arr,i);

	return 0;
}
	


