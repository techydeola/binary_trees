#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a
 *                       binary tree
 * @tree: pointer to the root node of yhe tree to measure the balance factor
 *
 * Return: (0) if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t rheight = 0;
	size_t lheight = 0;

	if (tree == NULL)
		return (0);

	lheight = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	rheight = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (lheight - rheight);
}
