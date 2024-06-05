#include "binary_trees.h"

/**
 * binary_tree_height - determines the height of a bt
 * @tree: pointer of root node of subtree
 *
 * Return: height of bt else 0 if tree is empty or if has only root
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft, heightRight, height;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		heightLeft = binary_tree_height(tree->left);
		heightRight = binary_tree_height(tree->right);
		height = (heightLeft > heightRight) ? heightLeft : heightRight;

		if ((tree->left == NULL) && (tree->right == NULL))
			return (height);
		else
			return (height + 1);
	}
}
