#include "binary_trees.h"

/**
 * binary_tree_node - this function creates a binary tree node
 * @parent: pointer to the node to insert the letf-child in
 * @value: value store
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->left = new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
