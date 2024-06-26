#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as a right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->n = value;
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
