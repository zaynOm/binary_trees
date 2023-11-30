#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: number of nodes with a child in the tree, 0 if tree is NULL.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		i++;

	return (i + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
