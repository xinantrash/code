#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

typedef struct list_node {
	int value;
	struct list_node *next;
}node;

typedef struct {
	node *base;
	node *top;
	int length;
}stack;

stack *ini_stack() {
	stack *S = (stack *)malloc(sizeof(stack));
	S->base = (node *)malloc(sizeof(node));
	S->top = (node *)malloc(sizeof(node));
	S->length = 0;

	return S;
}

bool empty(stack *S) {
	if ( S->length == 0 ) {
		return true;
	}
	else {
		return false;
	}
}

void push(stack *S, int value) {
	node *temp = S->base;

	while ( temp->next != NULL ) {
		temp = temp->next;
	}

	node *new_node = (node *)malloc(sizeof(node));
	new_node->value = value;

	temp->next = new_node;
	S->top->next = new_node;
	S->length++;
}

void pop(stack *S) {
	if ( empty(S) ) {
		cout << "error ";
	}
	else {
		node *delete_node = S->top->next;
		cout << delete_node->value << " ";
		node *temp = S->base;
		while ( temp->next->next != NULL ) {
			temp = temp->next;
		}
		temp->next = delete_node->next;
		S->top->next = temp;
		free(delete_node);
		S->length--;
	}
}

node *insert_linked_list(int length) {
	node *head = (node*)malloc(sizeof(node));
	node *temp = head;
	for ( int i=0; i<length; i++ ) {
		int value;
		cin >> value;
		node *temp_node = (node *)malloc(sizeof(node));
		temp_node->value = value;
		temp_node->next = NULL;
		temp->next = temp_node;
		temp = temp->next;
	}

	return head;
}

int linked_list_length(node *head) {
	int length = 0;
	node *temp = head;
	while ( temp->next != NULL ) {
		++length;
		temp = temp->next;
	}

	return length;
}

stack *reverse_linked(node *head, stack *S) {
	if ( head->next == NULL ) {
		cout << "fail";
	}
	
	while ( head->next != NULL ) {
		push(S, head->next->value);
		head = head->next;
	}
	return S;
}

int main(int argc, const char *argv[]) {
	stack *S = ini_stack();
	int list_length;
	int n;
	cin >> list_length;
	node *head = insert_linked_list(list_length);

	reverse_linked(head, S);

	while ( !empty(S) ) {
		pop(S);
	}

	return 0;
}
