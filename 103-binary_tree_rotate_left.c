#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  rotates tree to the left
 * @tree: root node
 * Return: new root node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *c_node, *p_node = tree;

	if (!tree)
		return (NULL);
	c_node = p_node->right;
	if (!c_node)
		return (tree);
	if (c_node->left)
		c_node->left->p_node = p_node;

	p_node->right = c_node->left;
	c_node->left = p_node;
	c_node->p_node = p_node->p_node;
	p_node->p_node = c_node;
	if (c_node->p_node && c_node->p_node->left == p_node)
		c_node->p_node->left = c_node;
	else if (c_node->p_node)
		c_node->p_node->right = c_node;

	return (c_node);
}
