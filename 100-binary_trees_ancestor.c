#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - lowest common ancestor of two nodes
 * @first: pointer to the node 1
 * @second: pointer to the node 2
 * Return: pointer to ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t d1, d2, lower, higher;
	binary_tree_t *node1, *node2;

	if (first == NULL || second == NULL)
		return (NULL);
	d1 = binary_tree_depth(first);
	d2 = binary_tree_depth(second);

	if (d1 > d2)
	{
		lower = d1;
		higher = d2;
		node1 = (struct binary_tree_s *)first;
		node2 = (struct binary_tree_s *)second;
	}
	else
	{
		lower = d2;
		higher = d1;
		node1 = (struct binary_tree_s *)second;
		node2 = (struct binary_tree_s *)first;
	}

	while (lower > higher)
	{
		lower--;
		node1 = node1->parent;
	}

	while (node1 != node2)
	{
		node1 = node1->parent;
		node2 = node2->parent;
	}

	return (node1);
}
