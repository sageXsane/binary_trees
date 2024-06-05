#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether node is a leaf node (no kids)
 * @node: pointer to node that is checked
 *
 * Return: returns 1 is leaf node else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	else
		return (0);
}
