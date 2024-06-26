#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->n = value;
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
