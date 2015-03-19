//Joe Steele, 260516386
#include "list.h"


aNode *current;
void add(int x){
	aNode *newNode;
	current = head;
	while(current->next != NULL) {
		(current = current->next);
		}
	
}