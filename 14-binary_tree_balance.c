#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for comp
 * @tree: the tree
 * Return: height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t k = 0;
	size_t j = 0;

	if (tree == NULL)
		return (0);
	else
	{
		if (tree)
		{
			k = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			j = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((k > j) ? k : j);
	}
}

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the root node to measure balance factor
 *
 * Return:  the balance factor, 0 tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
