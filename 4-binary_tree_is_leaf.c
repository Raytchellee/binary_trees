#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks for leaf nodes
 * @node: pointer to the node
 * Return: none
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return 0;
	if (node->left == NULL && node->right == NULL)
		return 1; 

	return 0;
}
