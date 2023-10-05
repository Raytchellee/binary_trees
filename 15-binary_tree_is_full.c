/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the node
 * Return: none
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t first, second;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	first = binary_tree_is_full(tree->left);
	second = binary_tree_is_full(tree->right);
	if (first == 0 || second == 0)
		return (0);

	return (1);
}
