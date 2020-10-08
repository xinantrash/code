#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct list_node {
	int value;
	struct list_node *next;
}node;

node *insert_linked_list() {
	node *head = (node *)malloc(sizeof(node));
	node *temp = head;

	do {
		int value;
		cin >> value;
		if ( value == -1 ) {
			break;
		}
		else {
			node *temp_node = (node *)malloc(sizeof(node));
			temp_node->value = value;
			temp->next = temp_node;
			temp_node->next = NULL;
			temp = temp->next;
		}
	} while ( 1 );

	return head;
}

void show_linked_list(node *head) {
	node *temp = head;
	
	while ( temp->next != NULL ) {
		cout << temp->next->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

void delete_linked_list(node *linked_list_a_head, node *linked_list_b_head) {
	node *temp_b = linked_list_b_head;
	while ( temp_b->next != NULL ) {
		node *temp_a = linked_list_a_head;
		while ( temp_a->next != NULL ) {
			if ( temp_b->next->value == temp_a->next->value ) {
				if ( temp_a->next->next == NULL ) {
					temp_a->next = NULL;
					free(temp_a->next);
					break;
				}
				temp_a->next = temp_a->next->next;
			}
			temp_a = temp_a->next;
		}
		temp_b = temp_b->next;
	}
}

int main(int argc, const char *argv[]) {
	node *linked_list_a_head = insert_linked_list();
	node *linked_list_b_head = insert_linked_list();

	delete_linked_list(linked_list_a_head, linked_list_b_head);

	show_linked_list(linked_list_a_head);
	
	return 0;
}
