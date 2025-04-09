#include "binary_trees.h"

/**
 * binary_tree_height - check the code
 * @tree: est un pointeur constant vers une structure
 *
 * Return: valid the code
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (1 + left);
	else
		return (1 + right);
}

/**
 * binary_tree_balance - check the code
 * @tree: est un pointeur constant vers une structure
 *
 * Return: valid the code
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
