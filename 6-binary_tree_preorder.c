#include "binary_trees.h"

/**
 * binary_tree_preorder - check the code
 * @tree: est un pointe vers une structure
 * @func: est un pointeur de fonction
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
