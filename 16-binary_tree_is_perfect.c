#include "binary_trees.h"
#include "15-binary_tree_is_full.c"

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
	first = get_height(tree->left);
	second = get_height(tree->right);
	if (first > second)
		return (first + 1);
	return (second + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node
 * Return: none
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t first, second, third;

	if (tree == NULL)
		return (0);
	first = get_height(tree->left);
	second = get_height(tree->right);
	third = binary_tree_is_full(tree);

	return ((first == second) && third);
}
