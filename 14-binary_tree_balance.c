#include "binary_trees.h"

/**
 * get_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: none
 */

size_t get_height(const binary_tree_t *tree)
{
	size_t first = 0, second = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	first = binary_tree_height(tree->left);
	second = binary_tree_height(tree->right);
	if (first > second)
		return (first + 1);
	return (second + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the node
 * Return: none
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t first, second;

	if (tree == NULL)
		return (0);
	first = get_height(tree->left);
	second = get_height(tree->right);

	return (first - second);
}

