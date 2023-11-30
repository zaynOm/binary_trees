#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 *
 * Return: the created node, NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right;

	right = malloc(sizeof(binary_tree_t));

	if (parent == NULL || right == NULL)
		return (NULL);

	right->n = value;
	right->parent = parent;
	right->right = right->left = NULL;
	if (parent->right != NULL)
	{
		right->right = parent->right;
		right->right->parent = right;
	}

	parent->right = right;

	return (right);
}
