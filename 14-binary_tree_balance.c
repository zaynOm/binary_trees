#include "binary_trees.h"

/**
 * height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: the height of the tree, 0 if tree is NULL.
 */
size_t height(const binary_tree_t *tree)
{
	size_t i, j;

	if (tree == NULL)
		return (0);

	i = height(tree->left);
	j = height(tree->right);

	return ((i > j) ? i + 1 : j + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: balance factor of a binyry tree, 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (!tree)
		return (0);

	balance = height(tree->left) - height(tree->right);
	return (balance);
}
