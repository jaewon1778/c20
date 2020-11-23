#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_NUM 100


enum TYPES { SHIRTS=1, PANTS, DRESS };

struct item{
	int type;

	union{
		char sml[4];
		char num[4];
	} size;
};

int main()
{
	struct item prod[MAX_NUM];
	enum TYPES T;
	FILE* fp = fopen("item.dat","r");
	
	if(!fp){
		printf("Failed to open file\n");
		return -1;
	}

	int type;
	char size[100];
	int n=0;

	while(!feof(fp)){
		fscanf(fp, "%d %s\n",&type, size);
		/*if (type==1){
			size=(int*)size;
		}*/
		switch(type){
			case 1:
				T=SHIRTS;
				prod[n].type=T;
				strcpy(prod[n].size.num,size);
				n++;
				break;
			case 2:
				T=PANTS;
				prod[n].type=T;
				strcpy(prod[n].size.sml,size);
				n++;
				break;
			case 3:
				T=DRESS;
				prod[n].type=T;
				strcpy(prod[n].size.sml,size);
				n++;
				break;
			default:
				break;
		}
	}

	for(int i=0; prod[i].type!=0;  i++){
		type=prod[i].type;
		switch(type){
			case 1:
				printf("셔츠 %s호\n",prod[i].size.num);
				break;
			case 2:
				printf("바지 %s사이즈\n",prod[i].size.sml);
				break;
			case 3:
				printf("원피스 %s사이즈\n",prod[i].size.sml);
				break;
			default:
				break;
		}
	}
	return 0;
}
