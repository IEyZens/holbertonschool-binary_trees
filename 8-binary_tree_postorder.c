#include "binary_trees.h"

/**
 * binary_tree_postorder - check the code
 * @tree: est un pointe vers une structure
 * @func: est un pointeur de fonction
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
