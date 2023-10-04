#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: none
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t first = 0, second = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	first = binary_tree_height(tree->left);
	second = binary_tree_height(tree->right);
	if (first > second)
		return (first + 1);
	return (second + 1);
}
