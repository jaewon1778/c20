#include<stdio.h>
#include<string.h>
#define LINE 100

void main()
{
	char buffer[LINE];
	FILE *fp = fopen("london.txt","r");
	char seps[]=" ,\n";
	char *tk;
	
	if(fp == NULL){
		printf("Failed to open file\n");
		return;
	}

	while(fgets(buffer, LINE-1, fp) != NULL){
		tk=strtok(buffer, seps);
		while(tk != NULL){
			printf("%s\n",tk);
			tk=strtok(NULL,seps);
		}
	}
	fclose(fp);

	
}
