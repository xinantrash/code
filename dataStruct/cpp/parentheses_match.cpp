#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

typedef struct list_node {
	char data;
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

void push(stack *S, char data) {
	node *temp = S->base;

	while ( temp->next != NULL ) {
		temp = temp->next;
	}

	node *new_node = (node *)malloc(sizeof(node));
	new_node->data = data;

	temp->next = new_node;
	S->top->next = new_node;
	S->length++;
}

char pop(stack *S) {
	char data;
	if ( empty(S) ) {
		return ' ';
	}
	else {
		node *delete_node = S->top->next;
		data = delete_node->data;
		node *temp = S->base;
		while ( temp->next->next != NULL ) {
			temp = temp->next;
		}
		temp->next = delete_node->next;
		S->top->next = temp;
		free(delete_node);
		S->length--;
	}
	return data;
}

int main(int argc, const char *argv[]) {
	stack *S = ini_stack();
	string s;
	cin >> s;
	int n = s.length();

	for ( int i=0; i<n; i++ ) {
		if ( s[i] == '(' ) {
			push(S, s[i]);
		}
		else if ( s[i] == ')' ) {
			char temp = pop(S);
			if ( temp != '(' ) {
				push(S, temp);
			}
		}
		else if ( s[i] == '[' ) {
			push(S, s[i]);
		}
		else if ( s[i] == ']' ) {
			char temp = pop(S);
			if ( temp != '[' ){
				push(S, temp);
			}
		}
		else {
			continue;
		}
	}

	if ( S->length == 0 ) {
		cout << "ok";
	}
	else {
		cout << "error";
	}

	return 0;
}
