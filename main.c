//Joe Steele 260516386
#include <stdio.h>
#include <stdlib.h>

int main(){
	//aNode *new = malloc(sizeof(aNode));
	Boolean FalseName = 1;
	FILE *in;
	char fileName[500];

	while(FalseName == 1){
	printf("Please provide the name of the file to be parsed:\n");
	scanf("%s", fileName);
	in=fopen(fileName, "r'");
		if(in != NULL){
		FalseName = 0;
		}
		else(printf("Improper file name, \n"));
	}
return 0;
}