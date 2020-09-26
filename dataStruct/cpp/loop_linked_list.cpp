#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct list_node {
	int value;
	struct list_node *next;
}node;

//在链表中插入节点
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

//使用递归的方式输出链表
void show_linked_list(node *head) {
	node *temp = head;
	if ( temp->next != NULL ) {
		cout << temp->next->value << " ";
		show_linked_list(temp->next);
	}
}

int main(int argc, const char *argv[]) {
	int length;
	cin >> length;
	
	show_linked_list(insert_linked_list(length));

	return 0;
}
