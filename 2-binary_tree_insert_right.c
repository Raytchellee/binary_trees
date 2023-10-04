#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates new right node
 * @parent: pointer to the parent node
 * @value: new node value
 * Return: NULL or new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);
	if (!node)
		return (NULL);
	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
