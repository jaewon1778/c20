#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int inclu(int n[],int m)
{
	int i;
	for (i=0; i<m; i++)
		if (n[i]==n[m])
			return 0;
	return 1;
}


int main()
{
	int i=0;
	int scores[SIZE]={0};
	
	while(i<SIZE){
		scores[i] = rand()%100;
		if (inclu(scores, i)==0){
			continue;
		}
		else{			
			i++;
		}
	}

	for(i=0; i<SIZE; i++)
		printf("scores[%d]=%d\n",i,scores[i]);

	return 0;
}



