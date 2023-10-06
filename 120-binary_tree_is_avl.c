#include <limits.h>
#include "binary_trees.h"

/**
 * get_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: none
 */

int get_height(const binary_tree_t *tree)
{
	int first = 0, second = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	first = get_height(tree->left);
	second = get_height(tree->right);
	if (first > second)
		return (first + 1);
	return (second + 1);
}

/**
 * check_avl - help check for avl
 * @tree: root node
 * @min: minimum value
 * @max: maximum value
 * Return: 0 or 1
 */

int check_avl(const binary_tree_t *tree, int min, int max)
{
	int h1, h2, sub;

	if (tree != NULL)
	{
		if (tree->n < min || tree->n > max)
			return (0);
		h1 = get_height(tree->left);
		h2 = get_height(tree->right);
		sub = abs(h1 - h2);
		if (sub > 1)
			return (0);
		return (
			check_avl(tree->left, min, tree->n - 1) &&
			check_avl(tree->right, tree->n + 1, max)
		);
	}
	return (1);
}

/**
 * int binary_tree_is_avl - checks avl
 * @tree: root node
 * Return: 1 or 0
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (check_avl(tree, INT_MIN, INT_MAX));
}
