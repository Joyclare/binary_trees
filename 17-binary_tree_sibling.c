#include "binary_trees.h"

/**
* binary_tree_sibling - a function that finds the sibling of a node
* @node: this finds the sibling of a node
*
* Return: pointer to the sibling node
*/


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node && node->parent->right)
	{
		return (node->parent->right);
	}

	if (node->parent->right == node && node->parent->left)
	{
		return (node->parent->left);
	}

	return (NULL);
}

