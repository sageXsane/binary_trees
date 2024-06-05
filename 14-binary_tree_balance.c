#include "binary_trees.h"

/**
 * binary_tree_balance - calculates the balance of bt with root node tree
 * @tree: pointer to node of subtree
 *
 * Return: return 0 when tree is empty else left and right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t heightLeft, heightRight;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		heightLeft = binary_tree_height(tree->left);
		heightRight = binary_tree_height(tree->right);

		// printf("Heights of %d[%ld] and %d[%ld] give a balance difference of %d/n", tree->left->n, heightLeft, tree->right->n, heightRight, (int)(heightLeft - heightRight));
		return ((int)(heightLeft - heightRight));
	}
}

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
