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
	list->length = 0;

	return list;
}

// 在链表末尾插入新的节点
void insert_linked_list(linked_list *list, int val) {
	node *temp = list->head;

	while ( temp->next != NULL ) {
		temp = temp->next;
	}

	node *insert_node = (node *)malloc(sizeof(node));
	insert_node->val = val;
	temp->next = insert_node;
	insert_node->next = NULL;
	list->length++;
}

// 遍历链表但只输出偶数序位的节点
void traverse_by_even(linked_list *list) {
	node *temp = list->head;
	if ( temp->next == NULL ) {
		return;
	}
	int cnt = 1;
	int sum = 0;

	while ( temp->next != NULL ) {
		if ( cnt % 2 == 0 ) {
			cout << temp->next->val << " ";
			sum += temp->next->val;
		}
		temp = temp->next;
		cnt++;
	}

	cout << endl << sum;
}

int main(int argc, const char *argv[]) {
	linked_list *list = ini_linked_list();
	int len;
	cin >> len;

	while ( len > 0 ) {
		len--;
		int temp;
		cin >> temp;
		insert_linked_list(list, temp);
	}

	traverse_by_even(list);

	return 0;
}
