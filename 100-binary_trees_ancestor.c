#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: ptr to the first node
 * @second:ptr to the second node
 * Return: common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *male, *female;

	if (!first || !second)
		return (NULL);
	if (first == second)
                return ((binary_tree_t *)first);

	male = first->parent, female = second->parent;
	if (first == female || !male || (!male->parent && female))
		return (binary_trees_ancestor(first, female));
	else if (male == second || !female || (!female->parent && male))
		return (binary_trees_ancestor(male, second));
	return (binary_trees_ancestor(male, female));
}
