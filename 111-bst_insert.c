#include "binary_trees.h"

/**
 * bst_insert - inserts valunt in bst
 * @tree: root node
 * @value: value to insert
 * Return: created node
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node, *curr;

	if (tree == NULL || *tree == NULL)
	{
		node = binary_tree_node(NULL, value);
		*tree = node;
		return (node);
	}

	curr = *tree;
	while (curr != NULL)
	{
		if (curr->n == value)
			return (NULL);
		if (curr->n > value)
		{
			if (curr->left == NULL)
			{
				curr->left = binary_tree_node(curr, value);
				return (curr->left);
			}
			curr = curr->left;
		}
		if (curr->n < value)
		{
			if (curr->right == NULL)
			{
				curr->right = binary_tree_node(curr, value);
				return (curr->right);
			}
			curr = curr->right;
		}
	}
	return (NULL);
}
