#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new bt node, with a parent node and no children
 * @parent: parent node of the new bt node
 * @value: the data associated with the n property of the node
 *
 * Return: returns the pointer to the new node, else NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
