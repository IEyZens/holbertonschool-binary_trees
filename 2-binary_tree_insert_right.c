#include "binary_trees.h"

/**
 * binary_tree_insert_right - check the code
 * @parent: est un pointeur vers une structure
 * @value: est un int
 *
 * Return: valid the code
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_right;

	if (parent == NULL)
		return (NULL);

	node_right = malloc(sizeof(binary_tree_t));
	if (node_right == NULL)
		return (NULL);

	node_right->n = value;
	node_right->parent = parent;
	node_right->left = NULL;
	node_right->right = NULL;

	if (parent->right != NULL)
	{
		node_right->right = parent->right;
		parent->right->parent = node_right;
	}

	parent->right = node_right;

	return (node_right);
}
