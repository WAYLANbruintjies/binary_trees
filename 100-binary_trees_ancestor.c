#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *male, *female;
	male = first->parent, female = second->parent;

	if (first == second)
                return ((binary_tree_t *)first);
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == female || !male || (!male->parent && female))
		return (binary_trees_ancestor(first, female));
	else if (male == second || !female || (!female->parent && male))
		return (binary_trees_ancestor(male, second));
	return (binary_trees_ancestor(male, female));
}
