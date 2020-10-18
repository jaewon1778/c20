#include<stdio.h>

int cn_one( int x,int n)
{
	static int cnt=0;
	if (n==1){
		((x & n) == 0) ? printf("0"):(printf("1"),cnt++);
		printf("\n1의 개수: %d\n",cnt);
		return 0;
	}
	else{
		((x & n) == 0) ? printf("0"):(printf("1"),cnt++);
		return cn_one(x,n>>1);
	}
}



int main()
{
	unsigned int x;
	printf("숫자를 입력: ");
	scanf("%d",&x);
	cn_one(x,1<<7);
	return 0;
}
