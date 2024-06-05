#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the whole binary tree
 * @tree: pointer to the root of the tree/subtree
 *
 * Return: returns to program when leaf nodes reached
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
