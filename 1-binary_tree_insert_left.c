#include "binary_trees.h"

/**
 * binary_tree_node - A function that inserts a node as a left-child
 * @parent: pointer to the parent node of the node to be inserted
 * @value: the value to put in the inserted node
 * Return: pointer to the new node, or NULL (failure)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;
	return (newNode);
}
