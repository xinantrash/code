// #include <cstdlib>
// #include <iostream>
// 
// using namespace std;
// 
// typedef struct list_node {
// 	int value;
// 	struct list_node *next;
// }node;
// 
// //在链表中插入节点
// node *insert_linked_list(int length) {
// 	node *head = (node*)malloc(sizeof(node));
// 	node *temp = head;
// 	for ( int i=0; i<length; i++ ) {
// 		int value;
// 		cin >> value;
// 		node *temp_node = (node *)malloc(sizeof(node));
// 		temp_node->value = value;
// 		temp_node->next = NULL;
// 		temp->next = temp_node;
// 		temp = temp->next;
// 	}
// 
// 	return head;
// }
// 
// //使用递归的方式输出链表
// void show_linked_list(node *head) {
// 	node *temp = head;
// 	if ( temp->next != NULL ) {
// 		cout << temp->next->value << " ";
// 		show_linked_list(temp->next);
// 	}
// }
// 
// int main(int argc, const char *argv[]) {
// 	int length;
// 	cin >> length;
// 
// 	show_linked_list(insert_linked_list(length));
// 
// 	return 0;
// }

#include <cstdlib>
#include <iostream>

using namespace std;

// 节点
typedef struct list_node {
	int val;
	struct list_node *next;
}node;

// 链表
typedef struct {
	node *head;
	int length;
}linked_list;

//初始化链表
linked_list *ini_linked_list() {
	linked_list *list = (linked_list *)malloc(sizeof(linked_list));
	list->head = (node *)malloc(sizeof(node));
	list->head->next = list->head;
	list->length = 0;

	return list;
}

// 在链表末尾插入新的节点
void insert_linked_list(linked_list *list, int val) {
	node *temp = list->head;

	while ( temp->next != list->head ) {
		temp = temp->next;
	}

	node *insert_node = (node *)malloc(sizeof(node));
	insert_node->val = val;
	temp->next = insert_node;
	insert_node->next = list->head;
	list->length++;
}

void traverse(linked_list *list, int index) {
	node *temp = list->head;
	int sum = 0;
	int cnt = list->length - index;

	for ( int i=0; i<cnt; i++ ) {
		temp = temp->next;
	}

	while ( temp->next != list->head ) {
		sum += temp->next->val;
		temp = temp->next;
	}

	cout << sum;
}

int main(int argc, const char *argv[]) {
	int length;
	linked_list *list = ini_linked_list();
	cin >> length;
	
	for ( int i=0; i<length; i++ ) {
		int temp;
		cin >> temp;

		insert_linked_list(list, temp);
	}

	cin >> length;

	traverse(list, length);

	return 0;
}
