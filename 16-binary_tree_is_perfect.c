#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node
 * Return: none
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int first, second;

	if (tree == NULL)
		return (0);
	first = binary_tree_balance(tree);
	second = binary_tree_is_full(tree);

	return (first == 0 && second);
}
