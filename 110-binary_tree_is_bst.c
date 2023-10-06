#include "binary_trees.h"

/**
 * check_bst - Compare node in order to check if a given
 *
 * @tree: node to check
 * @min_val: min_valinmum
 * @max_val: maximum
 * Return: 0 or 1
 */

int check_bst(const binary_tree_t *tree, int min_val, int max_val)
{
	if (tree == NULL)
		return (1);
	if (tree->n > max_val || tree->n < min_val)
		return (0);

	return (check_bst(tree->left, min_val, tree->n - 1) &&
		check_bst(tree->right, tree->n + 1, max_val));
}

/**
 * binary_tree_is_bst - check if a tree is bst
 * @tree: root node
 * Return: new root node
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_bst(tree, INT_MIN, INT_MAX));
}
