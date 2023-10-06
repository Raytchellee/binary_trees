#include "binary_trees.h"

/**
 * find_ext_left - gets substitute
 * @node: root node
 * Return: minimum node
 */

bst_t *find_ext_left(bst_t *node)
{
	while (node->left != NULL)
		node = node->left;
	return (node);
}

/**
 * bst_remove - removes node
 * @root: root node
 * @value: target value
 * Return: new tree without value
 */

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *p_node, *curr;

	if (root == NULL)
		return (NULL);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else if (value < root->n)
		root->left = bst_remove(root->left, value);
	else
	{
		if (root->left == NULL && root->right == NULL)
		{
			free(root);
			root = NULL;
		}
		else if (root->right == NULL)
		{
			curr = root;
			p_node = root->parent;
			root = root->left;
			root->parent = p_node;
			free(curr);
		}
		else if (root->left == NULL)
		{
			curr = root;
			p_node = root->parent;
			root = root->right;
			root->parent = p_node;
			free(curr);
		}
		else
		{
			curr = find_ext_left(root->right);
			root->n = curr->n;
			root->right = bst_remove(root->right, temp->n);
		}
	}
	return (root);
}
