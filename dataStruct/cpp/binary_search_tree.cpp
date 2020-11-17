#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct b_t_node {
	int val;
	struct b_t_node *left;
	struct b_t_node *right;
}binary_tree;

// 插入节点
binary_tree *insert_node(binary_tree *root, int val) {
	if ( root == NULL ) {
		binary_tree *node = (binary_tree *)malloc(sizeof(binary_tree));
		node->val = val;
		node->left = NULL;
		node->right = NULL;

		root = node;
	}
	else if ( root->val <= val ) {
		root->right = insert_node(root->right, val);
	}
	else if ( root->val > val ) {
		root->left = insert_node(root->left, val);
	}

	return root;
}

void leaf_mid_order_traverse(binary_tree *root, int level) {
	if ( root->left ) {
		leaf_mid_order_traverse(root->left, level+1);
	}

	if ( root->right ) {
		leaf_mid_order_traverse(root->right, level+1);
	}

	if ( !root->left && !root->right ) {
		cout << root->val << " " << level <<endl;
	}
}

int main(int argc, const char *argv[]) {
	int num;
	int level = 1;
	cin >> num;
	binary_tree *tree = NULL;

	for ( int i=0; i<num; i++ ) {
		int val;
		cin >> val;

		tree = insert_node(tree, val);
	}

	leaf_mid_order_traverse(tree, level);

	return 0;
}
