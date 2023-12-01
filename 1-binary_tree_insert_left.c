#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 *
 * Return: the created node, NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;

	if (parent == NULL)
		return (NULL);

	left = malloc(sizeof(binary_tree_t));
	if (left == NULL)
		return (NULL);

	left->n = value;
	left->parent = parent;
	left->right = NULL;
	left->left = parent->left;
	if (parent->left != NULL)
		left->left->parent = left;
	parent->left = left;

	return (left);
}
