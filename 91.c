#include<stdio.h>
int main(){
	int a=100;
	int opt,n;
	void dec_item(int n){
		static int cn=0;
		a -= n;
		cn++;
		printf("%d번 판매했습니다\n",cn);
	}
	void inc_item(int n){
		static int cn=0;
		a += n;
		cn++;
		printf("%d번 입고했습니다\n",cn);
	}	
	void print_item(){
		printf("현재 재고는 %d개 입니다\n",a);
	}
	while(1){
		printf("(판매: 1, 입고: 2, 재고확인: 3, 종료: 4):");
		scanf("%d",&opt);
	
	if (opt<3 && opt>0){
		printf("수량을 입력하세요: ");
		scanf("%d",&n);
	}
	switch(opt){
	case 1:
		dec_item(n);
		break;
	case 2:
		inc_item(n);
		break;
	case 3:
		print_item();
		break;
	case 4:
		goto out;
		break;
	default:
		printf("잘못 선택함\n");
		}
	}
	out:	
	return 0;
}
