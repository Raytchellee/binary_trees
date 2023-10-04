#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the node
 * Return: none
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *current = NULL;
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	current = tree;
	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}
	return depth;
}
