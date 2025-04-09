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
 * is_perfect_recursive - check the code
 * @tree: est un pointeur constant vers une structure
 * @depth: est un int
 * @level: est un int
 *
 * Return: valid the code
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - check the code
 * @tree: est un pointeur constant vers une structure
 *
 * Return: valid the code
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = binary_tree_height(tree);

	return (is_perfect_recursive(tree, depth, 0));
}
