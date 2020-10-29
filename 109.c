#include<stdio.h>

void get_sum(int arr[],int n)
{
	for (int i=0; i<10; i++)
		if (i==9)
			arr[9-i]=arr[9-i];
		else
			arr[9-i]=arr[9-i]+arr[8-i];
}

int main()
{
	int arr[10];

	for (int i=0; i<10; i++)
		arr[i]=i;

	get_sum(arr,10);

	for (int i=0; i<10; i++)
		printf("%d\n",arr[i]);

	return 0;
}
