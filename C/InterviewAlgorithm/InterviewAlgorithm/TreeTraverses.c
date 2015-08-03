#include <stdio.h>
#include "TreeTraverses.h"
#include "TreeNodeQueue.h"

void print_node(struct TreeNode *node) {
	if (node == 0) return;

	printf ("%d ", node->value);
}

/*
	Maintaining sibliings with queue
*/
void level_order_traverse(struct TreeNode *root) {
	if (root == 0) return;
	
	enqueue(root);
	while (peek() != 0) {
		struct TreeNode *node = dequeue();
		print_node(node);
		enqueue(node->left);
		enqueue(node->right);
	}
}

/*
	Pre-order : [root]<left><right>
	In-order  : <left>[root]<right>
	Post-order: <left><right>[root]
*/
void pre_order_traverse(struct TreeNode *root) {
	if (root == 0) return;

	print_node(root);
	pre_order_traverse(root->left);
	pre_order_traverse(root->right);
}

void in_order_traverse(struct TreeNode *root) {
	if (root == 0) return;

	in_order_traverse(root->left);
	print_node(root);
	in_order_traverse(root->right);
}

void post_order_traverse(struct TreeNode *root) {
	if (root == 0) return;

	post_order_traverse(root->left);
	post_order_traverse(root->right);
	print_node(root);
}
