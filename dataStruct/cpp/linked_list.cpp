#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct list_node {
	int value;
	struct list_node *next;
}node;

//在链表尾段插入节点
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

//按排序插入节点
node *insert_list_position(node *head) {
	node *temp = head;
	int value;
	cin >> value;
	while ( temp->next != NULL ) {
		if ( value < temp->next->value ) {
			node *temp_node = (node *)malloc(sizeof(node));
			temp_node->value = value;
			temp_node->next = temp->next;
			temp->next = temp_node;
			return head;
		}
		temp = temp->next;
	}

	node *temp_node = (node *)malloc(sizeof(node));
	temp_node->value = value;
	temp->next = temp_node;

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

node *delete_last_list_node(node *head, int n) {
	node *temp = head;
	int index = linked_list_length(head) - n;

	for ( int i=0; i<index; i++ ) {
		temp = temp->next;
	}

	temp->next = temp->next->next;

	return head;
}

//输出链表
void show_linked_list(node *head) {
	list_node *temp = head;
	while ( temp->next != NULL ) {
		cout << temp->next->value << " ";
		temp = temp->next;
	}
}

int main(int argc, const char *argv[]) {
	int list_length;
	int n;
	cin >> list_length;
	node *head = insert_linked_list(list_length);
	cin >> n;
	delete_last_list_node(head, n);
	show_linked_list(head);
	return 0;
}
