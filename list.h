//Joe Steele, 260516386

#include <stdlib.h>
#include <malloc.h>


typedef struct node {
    int value;
    struct node * next;
} aNode;

extern aNode * head;

void add(int x);

void prettyPrint(NODE * another);

Boolean delete(int y);