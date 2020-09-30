#include<stdio.h>

int main(void)
{
	int m;
	
	printf("태어난 월을 입력:");
	scanf("%d",&m);

	switch(m)
	{
		case 12:
		case 1:
		case 2:
			printf("겨울에 태어났군요.\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("봄에 태어났군요.\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("여름에 태어났군요.\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("가을에 태어났군요.\n");
			break;
	}
	return 0;
}

