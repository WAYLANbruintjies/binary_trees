#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a root
 * @node: pointer to the node to check
 * Return: 1 (SUCCESS) if node is a root, otherwise 0 (FAIL)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
