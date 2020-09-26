#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct list_node {
	int value;
	struct list_node *next;
}node;

node *stack() {
	node *stack_head = (node *)malloc(sizeof(node));
	
	return stack_head;
}

node *push(node *stack_head, int value) {
	node *temp = stack_head;
	
	while ( temp->next != NULL ) {
		temp = temp->next;
	}


	node *temp_node = (node *)malloc(sizeof(node));
	temp_node->value = value;
	temp->next = temp_node;

	return stack_head;
}

void pop(node *stack_head) {
	node *temp = stack_head;

	while ( temp->next != NULL ) {
		temp = temp->next;
	}

	cout << temp->value << endl;

	free(temp);
}

int isEmpty(node *stack_head) {
	if ( stack_head->next == NULL ) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(int argc, const char *argv[]) {
	node *stack_a = stack();
	int value;
	cin >> value;
	push(stack_a, value);
	cout << isEmpty(stack_a) << endl;
	pop(stack_a);

	return 0;
}
