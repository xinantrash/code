#include <cstdlib>
#include <iostream>

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

void show_stack(stack *S) {
	node *temp = S->base;

	while ( temp->next != NULL ) {
		cout << temp->next->value << " ";
		temp = temp->next;
	}
}

int stack_length(stack *S) {
	return S->length;
}

int main(int argc, const char *argv[]) {
	stack *S = ini_stack();
	while ( 1 ) {
		int flag;
		cin >> flag;
		if ( flag == 1 ) {
			int value;
			cin >> value;
			push(S, value);
		}
		else if ( flag == 0 ) {
			pop(S);
		}
		else {
			break;
		}
	}

// 	show_stack(S);

	return 0;
}
