#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure the depth.
 *
 * Return: the depth of the tree, 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		i = 1 + binary_tree_depth(tree->parent);

	return (i);
}
