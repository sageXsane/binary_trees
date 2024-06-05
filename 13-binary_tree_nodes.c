#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of leaves a bt has
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: return number of child having nodes or 0 if tree is empty
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if ((tree->left != NULL) || (tree->right != NULL))
			return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
		else
			return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
}
