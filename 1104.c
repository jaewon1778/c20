#include<stdio.h>


int main()
{
	int arr[5]={2,4,6,8,10};
	int *p;

	p=arr;
	for (int i=0; i<5; i++){
		printf("a[%d]=%d\n",i,p[i]);
	}

	return 0;
}

