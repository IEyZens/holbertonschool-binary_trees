#include "binary_trees.h"

/**
 * binary_tree_delete - check the code
 * @tree: est un pointeur vers une structure
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
