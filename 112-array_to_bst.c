#include "binary_trees.h"

/**
 * array_to_bst - convert array to bst
 * @array: pointer to array
 * @size: array length
 * Return: new bst pointer
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t len;

	for (len = 0; len < size; len++)
		bst_insert(&root, array[len]);

	return (root);
}
