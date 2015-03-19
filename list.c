//Joe Steele, 260516386
#include "list.h"
#include <stdio.h>

void add(int x){
	current = head;
	while(current->next != NULL) {
			(current = current->next);
	}
	aNode *newNode;
	newNode = malloc(sizeof(aNode));
	newNode->value = x;
	newNode->next=NULL;
	current->next=newNode;
	//printf("%d", newNode->value);
}

//void prettyPrint{

//}