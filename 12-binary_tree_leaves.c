#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves a bt has
 * @tree: pointer to root node of the tree to count the number of leaves
 *
 * Return: return number of leaves or 0 if tree is empty
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
		if ((tree->left == NULL) && (tree->right == NULL))
			return (leaves + 1);
		else
			return (leaves);
	}
}
