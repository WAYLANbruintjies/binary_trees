#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively
 * @tree: pointer to the root node of the tree to check
 * Return: return 0 (FAILURE), otherwise 1 (SUCCESS)
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && tree->right == NULL) ||
		    (tree->left == NULL && tree->right) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: integer value
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
