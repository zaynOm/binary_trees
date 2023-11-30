#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: the height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i, j;

	if (tree == NULL)
		return (0);

	i = j = 0;

	if (tree->left)
		i = 1 + binary_tree_height(tree->left);
	if (tree->right)
		j = 1 + binary_tree_height(tree->right);

	return ((i > j) ? i : j);
}
