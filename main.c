//Joe Steele 260516386
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

aNode *head;
aNode *current;
int main(){
	head = NULL;
	head = malloc(sizeof(aNode));
	head->value = -1;
	head->next = NULL;
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
		//printf("%d", toRet);
		if(head->value == -1){
			head->value=toRet;
		}
		else{add(toRet);}
		}
	
	aNode *iterator;
	iterator=head;
	while(iterator->next != NULL){
		printf("%d\n", iterator->value);
		iterator = iterator->next;
	}
	printf("%d\n", iterator->value);
	
return 0;
}