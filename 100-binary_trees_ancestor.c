#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest common ancestor between two nodes
 * @first: pointer the first node
 * @second: pointer to the second node
 *
 * Return: NULL if nodes arent from the same tree else rest from recursive func
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	const binary_tree_t *root;

	if (find_root(first) != find_root(second))
		return (NULL);
	root = find_root(first);
	return ((binary_tree_t *)(find_LCA(root, first, second)));
}

/**
 * find_root - finds the root of a node
 * @node: pointer to node
 *
 * Return: pointer to root
 */
const binary_tree_t *find_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
	{
		return (node);
	}
	else
		return (find_root(node->parent));
}

/**
 * find_LCA - recursive function to determine LCA
 * @root: pointer to root
 * @node1: pointer to first node
 * @node2: pointer to second node
 *
 * Return: root if tree empty or if nodes are eq to root else return LCA
 */
const binary_tree_t *find_LCA(
	const binary_tree_t *root, const binary_tree_t *node1,
	const binary_tree_t *node2)
{
	const binary_tree_t *left;
	const binary_tree_t *right;

	if ((root == NULL) || (root == node1) || (root == node2))
		return (root);
	left = find_LCA(root->left, node1, node2);
	right = find_LCA(root->right, node1, node2);

	if (left != NULL && right != NULL)
		return (root);

	return (left != NULL ? left : right);
}
