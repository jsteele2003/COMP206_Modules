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

void prettyPrint(){
	aNode *iterator;
	iterator=head;
	while(iterator->next != NULL){
		printf("%d\n", iterator->value);
		iterator = iterator->next;
	}
	printf("%d\n", iterator->value);
}

aNode *find(int z){
	aNode *iterator;
	iterator=head;

	if(head->value == z){
		return head;
	}
	else{
		while((iterator->value != z) && (iterator->next != NULL)){
			iterator = iterator->next;
		}
		if(iterator->value == z){
			return iterator;
		}
		else{
			return NULL;
		}
	}
}


bool delete(int y){
	if (head == NULL){
		return false;
	}

	aNode *finder = find(y);

	if(finder == NULL){
		return false;
	}

	else if(finder == head){
		//printf("head verified\n");
		if(head->next != NULL){
				head = head->next;
			}
			if(head->next == NULL){
				free(head);
			}
		return true;
	}
	
	else if(finder->value == y){
	
		aNode *deleter;
		deleter=head;

		while(deleter->next != finder){
			deleter=deleter->next;
		}
		
		//finder points to a middle element
		if(finder->next !=NULL){
			deleter->next = deleter->next->next;
		}

		//finder points to the last element
		if(finder->next == NULL){
			deleter->next = NULL;
		}

		return true;	
	}
	else{
	return false;
	}

}

