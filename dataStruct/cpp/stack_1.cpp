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
	S->base = NULL;
	S->top->next = S->base;
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
	node *new_node = (node *)malloc(sizeof(node));
	new_node->value = value;
	
	new_node->next = S->top->next;
	S->top->next = new_node;
}

void pop(stack *S) {
	if ( empty(S) ) {
		cout << "error ";
	}
	else {
		cout << S->top->next->value << " ";
		node *temp = S->top->next;
		S->top->next = temp->next;
		free(temp);
	}
}

int main(int argc, const char *argv[]) {


	return 0;
}
