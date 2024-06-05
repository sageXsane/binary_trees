#include "binary_trees.h"

/**
 * binary_tree_inorder - displays bt using inorder traversal
 * @tree: pointer to root node in tree/subtree
 * @func: pointer to function to call that has node n value as param
 *
 * Return: nothing if reach leaf node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
