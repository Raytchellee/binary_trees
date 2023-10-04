#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates new left node
 * @parent: pointer to the parent node
 * @value: new node value
 * Return: NULL or new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
