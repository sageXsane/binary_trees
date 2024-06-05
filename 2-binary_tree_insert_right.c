#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a right node for the give parent node
 * @parent: parent node for which right node is inserted to
 * @value: the data associated with the n property of the new node
 *
 * Return: pointer to the new right node else NULL if parent or newnode fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (parent == NULL)
		return (NULL);
	rightNode = binary_tree_node(parent, value);
	if (rightNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = rightNode;
		rightNode->right = parent->right;
	}
	parent->right = rightNode;

	return (rightNode);
}
