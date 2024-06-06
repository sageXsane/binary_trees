#include "binary_trees.h"

/**
 * binary_tree_balance - calculates the balance of bt with root node tree
 * @tree: pointer to node of subtree
 *
 * Return: return 0 when tree is empty else left and right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightLeft, heightRight;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		heightLeft = binary_tree_height_2(tree->left);
		heightRight = binary_tree_height_2(tree->right);
		return (heightLeft - heightRight);
	}
}

/**
 * binary_tree_height_2 - determines the height of a bt
 * @tree: pointer of root node of subtree
 *
 * Return: height of bt else 0 if tree is empty or if has only root
 */
int binary_tree_height_2(const binary_tree_t *tree)
{
	int heightLeft, heightRight, height;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		heightLeft = binary_tree_height_2(tree->left);
		heightRight = binary_tree_height_2(tree->right);
		height = (heightLeft > heightRight) ? heightLeft : heightRight;
		return (height + 1);
	}
}
