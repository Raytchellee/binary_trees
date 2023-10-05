#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "14-binary_tree_balance.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node
 * Return: none
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t first, second;

	if (tree == NULL)
		return (0);
	first = binary_tree_size(tree->left);
	second = binary_tree_size(tree->right);

	return (first == second);
}
