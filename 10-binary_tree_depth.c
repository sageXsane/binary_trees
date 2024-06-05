#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a node
 * @tree: pointer to the node to measure the depth
 *
 * Return: return the depth else 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->parent != NULL)
			return (1 + binary_tree_depth(tree->parent));
		else
			return (binary_tree_depth(tree->parent));
	}
}
