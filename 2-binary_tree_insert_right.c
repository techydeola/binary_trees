#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the right-child
 *                            of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store the new node
 *
 * Return: a pointer to the created node
 *         NULL - on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->n = value;
		newnode->left = NULL;
		newnode->parent = parent;
		parent->right = newnode;
	}
	else
	{
		newnode->n = value;
		newnode->left = NULL;
		newnode->parent = parent;
		newnode->right = NULL;
		parent->right = newnode;
	}

	return (newnode);
}
