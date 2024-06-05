#include "binary_trees.h"

/**
 * binary_tree_is_root - checks whether node is root node
 * @node: node that is checked
 *
 * Return: return 1 if node parent empty(aka is a root node) else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
