#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 (SUCCESS) if node is a leaf, otherwise 0 (FAIL)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node)
		binary_tree_is_leaf(node->left == NULL);
		binary_tree_is_leaf(node->right == NULL);
		return (1);
}
