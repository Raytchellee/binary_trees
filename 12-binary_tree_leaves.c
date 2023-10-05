#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the node
 * Return: none
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t first, second;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	first = binary_tree_leaves(tree->left);
	second = binary_tree_leaves(tree->right);

	return (first + second);
}
