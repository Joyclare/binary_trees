#include "binary_trees.h"

/**
 * binary_tree_delete - this function deletes an entire binary tree
 * @tree: pointer to the tree to check
 *
 * Return: no return
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
