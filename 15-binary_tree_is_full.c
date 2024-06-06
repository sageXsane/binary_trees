#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if BT is a full BT
 * @tree: pointer to root node
 *
 * Return: 0 if tree is empty or node has one child else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int fullLeft, fullRight;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if ((tree->right == NULL) && (tree->left == NULL))
		{
			return (1);
		}
		else if ((tree->right != NULL) && (tree->left != NULL))
		{
			fullRight = binary_tree_is_full(tree->right);
			fullLeft = binary_tree_is_full(tree->left);
			return (fullRight && fullLeft);
		}
		else
		{
			return (0);
		}
	}
}
