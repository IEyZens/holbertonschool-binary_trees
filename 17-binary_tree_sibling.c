#include "binary_trees.h"

/**
 * binary_tree_sibling - check the code
 * @node: est un pointeur vers une structure
 *
 * Return: valid the code
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	if (node == node->parent->right)
		return (node->parent->left);

	return (NULL);
}
