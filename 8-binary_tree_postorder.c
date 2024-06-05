#include "binary_trees.h"

/**
 * binary_tree_postorder - displays bt using postorder traversal
 * @tree: pointer to root node in tree/subtree
 * @func: pointer to function to call that has node n value as param
 *
 * Return: nothing if reach leaf node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
