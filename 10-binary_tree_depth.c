#include "binary_trees.h"

/**
 * binary_tree_depth - check the code
 * @tree: est un pointeur constant vers une structure
 *
 * Return: valid the code
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
