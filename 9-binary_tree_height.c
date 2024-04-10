#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	if (tree)
	{
		size_t l_side = binary_tree_height(tree->left);
		size_t r_side = binary_tree_height(tree->right);

		if (l_side > r_side)
			return (l_side) + 1;
		else
			return (r_side) + 1;
	}
	return (1);
}
