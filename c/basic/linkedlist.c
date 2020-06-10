#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int val;
	struct node *next;
} node_t;

void printlist(node_t * head){
	node_t * current = head;

	while (current != NULL){
		printf("%d %p\n",current->val,current->next);
		current = current->next;
	}
}

int main(){
	node_t *testlist = NULL;
	testlist = (node_t *) malloc(sizeof(node_t));
	if(testlist == NULL){
		return 1;
	}
	testlist->val = 1;
	testlist->next = (node_t *) malloc(sizeof(node_t));
	testlist->next->val = 2;
	printlist(testlist);
	return 0;
}
