#include "binary_trees.h"

/**
 * binary_tree_node - check the code
 * @parent: est un pointeur vers une structure
 * @value: est un int
 *
 * Return: valid the code
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
