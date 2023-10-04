#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the node
 * Return: none
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t first, second;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	first = binary_tree_size(tree->left);
	second = binary_tree_size(tree->right);

	return (1 + first + second);
}
