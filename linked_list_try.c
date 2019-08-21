#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int value;
	struct node * next;
}node_t;

void print_list(node_t * head){
	node_t * current = head;

	while (current != NULL){
		printf("Value: %d\n", current->value);
		printf("Address: %p\n", (void *)current->next);
		current = current->next;
	}
}
void push(node_t * head, int value){
	node_t * current = head;
	while (current->next != NULL){
		current = current->next;
	}
	current->next = malloc(sizeof(node_t));
	current->next->value = value;
	current->next->next = NULL;
}
int main(){
	node_t * head = NULL;
	head = malloc(sizeof(node_t));

	if (head == NULL) {
		return 1;
	}
	head->value = 1;
	head->next = malloc(sizeof(node_t));
	head->next->value = 2;
	head->next->next = malloc(sizeof(node_t));
	head->next->next->value = 3;
	head->next->next->next = malloc(sizeof(node_t));
	head->next->next->next->value = 4;
	head->next->next->next->next = NULL;	

	print_list(head);
	printf("\n List finished, adding new value 5...\n\n");

	push(head, 5);
	print_list(head);
	return 0;
}
