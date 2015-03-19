//Joe Steele 260516386
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

aNode *head;
int main(){
	head = malloc(sizeof(aNode));
	int FalseName = 1;
	int toRet;
	FILE *in;
	char fileName[500];

	while(FalseName == 1){
	printf("Please provide the name of the file to be parsed:\n");
	scanf("%s", fileName);
	in=fopen(fileName, "rt");
		if(in != NULL){
		FalseName = 0;
		}
		else(printf("Improper file name, \n"));
	}
	while(!feof(in)){
	fscanf(in, "%d", &toRet);
	fgetc(in);
	printf("%d", toRet);
	add(toRet);
	}
	printf("\n");
return 0;
}