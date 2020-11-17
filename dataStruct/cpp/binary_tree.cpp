#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct b_t_node {
	char val;
	struct b_t_node *left;
	struct b_t_node *right;
}binary_tree;

// 往二叉树存储数据
void create_binary_tree(binary_tree **root) {
	char val;
	cin >> val;

	if ( val == '#' ) {
		*root = NULL;
	}
	else {
		*root = (binary_tree *)malloc(sizeof(binary_tree));
		(*root)->left = NULL;
		(*root)->right = NULL;
		(*root)->val = val;

		create_binary_tree(&(*root)->left);
		create_binary_tree(&(*root)->right);
	}
}

// 前序遍历二叉树
void pre_order_traverse(binary_tree *root) {

	cout << root->val;

	if ( root->left ) {
		pre_order_traverse(root->left);
	}
	
	if ( root->right ) {
		pre_order_traverse(root->right);
	}
}

// 中序遍历二叉树
void mid_order_traverse(binary_tree *root) {
	if ( root->left ) {
		mid_order_traverse(root->left);
	}

	cout << root->val;

	if ( root->right ) {
		mid_order_traverse(root->right);
	}
}

// 后序遍历二叉树
void last_order_traverse(binary_tree *root) {
	if ( root->left ) {
		last_order_traverse(root->left);
	}

	if ( root->right ) {
		last_order_traverse(root->right);
	}

	cout << root->val;
}

int main(int argc, const char *argv[]) {
	binary_tree *tree = NULL;

	create_binary_tree(&tree);

	pre_order_traverse(tree);
	cout << endl;
	mid_order_traverse(tree);
	cout << endl;
	last_order_traverse(tree);
	return 0;
}
