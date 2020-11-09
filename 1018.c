#include<stdio.h>
#define N 5

void bomb (int M[][N],int R,int C);

int main()
{
	int i,j;
	int sum=0;
	static int M[N][N]={{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
	
	bomb(M,1,1);
	bomb(M,0,4);
	bomb(M,2,3);

	for (i=0; i<N; i++)
		for (j=0; j<N; j++)
			sum += M[i][j];

	printf("남은 영역 수: %d\n",sum);

	return 0;
}



void bomb(int M[][N],int R,int C)
{
	int i, j, r, c;
	
	for (r=R-1; r<R+2; r++){
		for (c=C-1; c<C+2; c++){
			if (r==-1)
				continue;
			if (c==-1)
				continue;
			if (r==5)
				continue;
			if (c==5)
				continue;
			else
				M[r][c]=0;
		}
	}
}
