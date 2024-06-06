#include "binary_trees.h"

/**
 * binary_tree_is_perfect - determines whether perfect tree.
 * @tree: pointer of root node
 *
 * Description: compares number of nodes to the number of nodes a perfect tree
 * with same height would have
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int num_nodes = 0;
	int height = 0;
	int perfect_nodes;

	if (tree == NULL)
		return (0);
	num_nodes = (int)binary_tree_nodes(tree);
	height = (int)binary_tree_height(tree);
	perfect_nodes = (1 << (height + 1)) - 1;
	return (perfect_nodes == num_nodes);
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

/**
 * binary_tree_nodes - counts the number of leaves a bt has
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: return number of child having nodes or 0 if tree is empty
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
