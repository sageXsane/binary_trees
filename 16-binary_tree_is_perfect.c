#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks whether subtree/tree is perfect BT
 * @tree: pointer to root of tree/subtree
 *
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance, full;

	if (tree == NULL)
		return (0);

	balance = binary_tree_balance(tree);
	full = binary_tree_is_full(tree);

	if ((balance == 0) && (full == 1))
		return (1);
	else
		return (0);
}

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
