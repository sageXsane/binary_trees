#include "binary_trees.h"


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeLeft, sizeRight;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		sizeLeft = binary_tree_size(tree->left);
		sizeRight = binary_tree_size(tree->right);
		return (sizeLeft + sizeRight + 1);
	}
}
