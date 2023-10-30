#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child
 *                           of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node
 *         or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->n = value;
		newnode->right = NULL;
		parent->left = newnode;
	}
	else
	{
		newnode->n = value;
		newnode->left = NULL;
		newnode->right = NULL;
		parent->left = newnode;
	}
	return (newnode);
}
