//Joe Steele, 260516386
#ifndef __LIST_H_INCLUDED
#define __LIST_H_INCLUDED

#include <stdlib.h>


typedef enum { false, true } bool;

typedef struct node {
    int value;
    struct node *next;
} aNode;

extern aNode *head;
extern aNode *current;

void add(int x);

void prettyPrint();

bool delete(int y);

#endif