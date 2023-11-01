#include "binary_trees.h"

/**
 * binary_tree_size -  a function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 0 (if tree is NULL)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t rsize = 0, lsize = 0;

	if (tree == NULL)
		return (0);

	lsize = (tree->left) ? binary_tree_size(tree->left) : 0;
	rsize = (tree->right) ? binary_tree_size(tree->right) : 0;

	return (1 + (lsize + rsize));
}
