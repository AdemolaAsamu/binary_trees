#include "binary_trees.h"

/**
 * binary_tree_leaves - Total leafs in a binary Tree
 * @tree: a pointer to the root node to count
 *
 * Description: A NULL pointer is not a leaf
 * Return: size, return 0 if Tree is null
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
