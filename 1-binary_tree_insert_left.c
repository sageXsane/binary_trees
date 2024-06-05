#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a left node for the give parent node
 * @parent: parent node for which left node is inserted to
 * @value: the data associated with the n property of the new node
 *
 * Return: the pointer to the new left node else NULL if parent or newnode fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
		return (NULL);
	leftNode = binary_tree_node(parent, value);
	if (leftNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = leftNode;
		leftNode->left = parent->left;
	}
	parent->left = leftNode;

	return (leftNode);
}
