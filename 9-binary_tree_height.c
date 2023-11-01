#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer to the root node of yhe tree to measure the height
 *
 * Return: (0) if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rheight = 0;
	size_t lheight = 0;

	if (tree == NULL)
		return (0);

	lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rheight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((lheight > rheight) ? lheight : rheight);
}
