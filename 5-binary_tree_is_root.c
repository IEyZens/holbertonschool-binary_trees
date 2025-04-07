#include "binary_trees.h"

/**
 * binary_tree_is_root - check the code
 * @node: est un pointeur constant vers une structure
 *
 * Return: valid the code
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
