#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height, otherwise 0(FAILURE)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lh = 0;
		size_t rh = 0;

		lh = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rh = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lh > rh) ? lh : rh);
	}
	return (0);
}
