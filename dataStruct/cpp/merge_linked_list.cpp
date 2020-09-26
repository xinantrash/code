#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct list_node {
	int value;
	struct list_node *next;
}node;

//判断是两链表是否有重复数据
bool flag = false;

//在链表尾端插入节点
node *insert_linked_list() {
	node *head = (node *)malloc(sizeof(node));
	node *temp = head;

	do {
		int value;
		cin >> value;
		if ( value == 0 ) {
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

//输出链表
void show_linked_list(node *head) {
	node *temp = head;
	
	while ( temp->next != NULL ) {
		cout << temp->next->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

//合并链表
node *merge_linked_list(node *linked_list_a_head, node *linked_list_b_head) {
	node *temp_b = linked_list_b_head;
	while ( temp_b->next != NULL ) {
		node *temp_a = linked_list_a_head;
		while ( temp_a->next != NULL ) {
			if ( temp_b->next->value == temp_a->next->value ) {
				flag = true;
			}
			temp_a = temp_a->next;
		}
		if ( !flag ) {
			node *temp_node = (node *)malloc(sizeof(node));
			temp_node->value = temp_b->next->value;
			temp_a->next = temp_node;
		}
		flag = false;
		temp_b = temp_b->next;
	}

	return linked_list_a_head;
}

int main(int argc, const char *argv[]) {
	node *linked_list_a_head = insert_linked_list();
	node *linked_list_b_head = insert_linked_list();

// 	show_linked_list(linked_list_a_head);
// 	show_linked_list(linked_list_b_head);

	node *ans = merge_linked_list(linked_list_a_head, linked_list_b_head);

	show_linked_list(ans);
	
	return 0;
}
