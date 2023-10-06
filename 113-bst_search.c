#include "binary_trees.h"

/**
 * bst_search - search for value in bst
 * @tree: root node
 * @value: value to search
 * Return: correct node or null
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (tree->n == value)
		return ((binary_tree_t *) tree);

	if (value > tree->n)
		return (bst_search(tree->right, value));

	return (bst_search(tree->left, value));
}
