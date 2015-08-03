#include <stdlib.h>
#include "ArrayToTree.h"

struct TreeNode *array_to_tree(int *source, int size) {
	struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));

	if (size < 1) return 0;

	if (size == 1) {
		node->value = *source;
		node->left = 0;
		node->right = 0;
	} else if (size == 2) {
		node->value = *(source + 1);
		node->left = array_to_tree(source, 1);
		node->right = 0;
	} else {
		int pos = size / 2;
		node->value = *(source + pos);
		node->left = array_to_tree(source, pos);
		node->right = array_to_tree(source + pos + 1, size - pos - 1);
	}
	return node;
}