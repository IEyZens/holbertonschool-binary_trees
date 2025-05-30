#include "binary_trees.h"

/**
 * binary_tree_is_full - check the code
 * @tree: est un pointeur constant vers une structure
 *
 * Return: valid the code
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	else
		return (0);
}
