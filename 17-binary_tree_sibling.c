#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling to a child node
 * @node: pointer to child node finding its sibling
 *
 * Return: NULL if tree empty/root or has no sibling else sibling node pointer
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if ((node == NULL) || (node->parent == NULL))
		return (NULL);

	if (node->parent->left == node)
		sibling = node->parent->right;
	else if (node->parent->right == node)
		sibling = node->parent->left;

	if (sibling == NULL)
		return (NULL);
	else
		return (sibling);
}
