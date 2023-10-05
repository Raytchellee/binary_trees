#include "binary_trees.h"

/**
 * num_nodes - returns total nodes
 * @node:  node to count
 * Return: count
 */

int num_nodes(binary_tree_t *node)
{
	if (!node)
		return (0);

	return (1 + num_nodes(node->left) + num_nodes(node->right));
}

/**
 * check - checks complete node
 * @node: node to check
 * @idx: node index
 * @count: number of nodes
 * Return: 1 or 0
 */

int check(binary_tree_t *node, int idx, int count)
{
	if (!node)
		return (0);

	if (idx >= count)
		return (0);
	if (!node->left && !node->right)
		return (1);
	if (node->right && !node->left)
		return (0);
	if (node->left && !node->right)
		return (check(node->left, idx * 2 + 1, count));

	return (check(node->left, idx * 2 + 1, count) &&
		check(node->right, idx * 2 + 2, count));
}

/**
 * binary_tree_is_complete - check complete tree
 * @tree: root node
 * Return: 1 or 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int count;
	binary_tree_t *node;

	if (!tree)
		return (0);

	node = (binary_tree_t *)tree;
	count = num_nodes(node);

	return (check(node, 0, count));
}
