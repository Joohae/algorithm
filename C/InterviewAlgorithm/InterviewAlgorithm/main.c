#include <stdio.h>
#include "ArrayToTree.h"
#include "TreeTraverses.h"

int main (char *argv[], int argc) {
	struct TreeNode *root;
	int source[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	root = array_to_tree(source, 10);

	printf ("Level order: ");
	level_order_traverse(root);
	printf ("\n");

	printf ("Pre order: ");
	pre_order_traverse(root);
	printf ("\n");

	printf ("In order: ");
	in_order_traverse(root);
	printf ("\n");

	printf ("Post order: ");
	post_order_traverse(root);
	printf ("\n");

	getch();
}