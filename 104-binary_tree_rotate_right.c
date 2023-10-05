#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates tree to the right
 * @tree: root node
 * Return: new root node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *c_node, *p_node = tree;

	if (!tree)
		return (NULL);
	c_node = p_node->left;
	if (!c_node)
		return (tree);
	if (c_node->right)
		c_node->right->parent = p_node;

	p_node->left = c_node->right;
	c_node->right = p_node;
	c_node->parent = p_node->parent;
	p_node->parent = c_node;
	if (c_node->parent && c_node->parent->left == p_node)
		c_node->parent->left = c_node;
	else if (c_node->parent)
		c_node->parent->right = c_node;

	return (c_node);
}
