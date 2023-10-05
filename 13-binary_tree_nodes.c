#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child
 * @tree: pointer to the node
 * Return: none
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t first, second;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	first = binary_tree_nodes(tree->left);
	second = binary_tree_nodes(tree->right);

	return (1 + first + second);
}
