#include<stdio.h>
#include<string.h>
#define LINE_SIZE 256

struct words{
	char word[20];
	int n;
};

void main()
{
	char buffer[LINE_SIZE];
	char* token;
	FILE *fp = fopen("london.txt","r");
	struct words w[30];
	int i=0,p;

	if(fp==NULL){
		printf("Failed to open file\n");
		return;
	}

	while(fgets(buffer, LINE_SIZE-1, fp) != NULL) {
		token = strtok(buffer, " ,.!?\t\n");
		while(token != NULL){

			if (i==0){
				strcpy(w[i].word,token);
				w[i].n=1;
				i++;
				token = strtok(NULL, " ,.!?\t\n");
				continue;
			}
			for (p=0; p<i; p++){
				if (strcmp(w[p].word,token)==0){
					w[p].n++;					
					break;
				}
			}
			if (strcmp(w[p].word,token)==0){
				token = strtok(NULL, " ,.!?\t\n");
				continue;
			}
			strcpy(w[i].word,token);
			w[i].n=1;
			i++;

			token = strtok(NULL, " ,.!?\t\n");
		}

	}

	for(int j=0; j<i; j++){
		printf("%d. %s : %d\n",j,w[j].word,w[j].n);
	}
	

	fclose(fp);
}

