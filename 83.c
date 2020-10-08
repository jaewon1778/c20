#include<stdio.h>

int main()

{
	int n;
	int is_prime(int n){
		int div = 0,i;
		if (n==1)
			return 0;
		if (n<=3)
			return 1;
		if(n%2==0)
			return 0;
		if(n%3==0)
			return 0;
		else
			for (i=1;i<=n;i++)
			{
				if (n%i==0)
					div++;
			}
			return (div == 2);
	}

	void pr(int n){
		int i,a=0;
		for (i=1;i<=n;i++)
		{
			a=0;
			a=is_prime(i);
			if (a==1)
				printf("%d ",i);
		}
		printf("\n");		
	}

	int get_int(void){
		int n;
		printf("정수를 입력하세요: ");
		scanf("%d",&n);
		return n;
	}

	pr(get_int());	

	return 0;
}
