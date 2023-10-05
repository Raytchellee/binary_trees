#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * output_level - apply func on current level
 * @func: function
 * @level: current level
 * @node: node pointer
 * Return: none
 */

void output_level(binary_tree_t *node, void (*func)(int), int level)
{
	if (func != NULL && node != NULL)
	{
		if (level == 1)
			func(node->n);
		if (level > 1)
		{
			output_level(node->left, func, level - 1);
			output_level(node->right, func, level - 1);
		}
	}
}

/**
 * binary_tree_levelorder - transverse tree level order
 * @tree: tree to traverse
 * @func: function pointer
 * Return: none
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h = 0, idx;
	binary_tree_t *node = (binary_tree_t *)tree;

	if (tree == NULL || func == NULL)
		return;
	h = binary_tree_height(tree);
	for (idx = 0; idx <= h + 1; idx++)
		output_level(node, func, idx);
}
