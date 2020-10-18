#include<stdio.h>
#include<sys/time.h>

int main()
{	
	struct timeval nts, nte, rts, rte;
	long a,s;
	
	gettimeofday(&nts, NULL);
	a=0;
	for (s=0; s<10000000; s++)
		a += s;
	printf("sum=%ld\n",a);
	gettimeofday(&nte, NULL);
	printf("걸린 시간: %f\n",(nte.tv_usec - nts.tv_usec)*1.0);
	register long sum, i;

	gettimeofday(&rts, NULL);
	sum =0;
	for(i=0;i<10000000; i++)
		sum += i;

	printf("sum=%ld\n",sum);
	gettimeofday(&rte, NULL);	
	printf("걸린 시간: %lf\n",(rte.tv_usec - rts.tv_usec)*1.0);

	return 0;
}
