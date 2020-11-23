#include<stdio.h>
#include<string.h>

int main()
{
	char s[]="language";
	char c='g';
	char *p;
	int loc;
	
	p=strchr(s,c);
	
	while(1) {
		loc=(int)(p-s);
		printf("%c가 %d에서 발견됨\n",c,loc);
		p=strchr(&s[loc+1],c);
		if (p==NULL)
			break;
	}

	return 0;
}


