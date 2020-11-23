#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 26

void main()
{
    char str[] = "The worst things to eat before you sleep";
    char Alp[2][26]={{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},{0}};
	int i,N;
	char STR[100]={0};
	
	for (i=0; i<strlen(str); i++){
		if (str[i] != ' '){
			if(islower(str[i])){
			    STR[i]=toupper(str[i]);
			}
			else{ 
				STR[i]=str[i];
			}
		}
	
	}
	for (i=0; i<40; i++){
		N=(STR[i]-'A');
		Alp[1][N]++;
	}

	for (i=0; i<SIZE; i++)
		printf("%c의 수: %d\n",Alp[0][i],Alp[1][i]);


}

