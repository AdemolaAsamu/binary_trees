#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: a pointer to the root node
 *
 * Return: Perfect returns 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t factor = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	factor = (size_t)_pow_recursion(2, height + 1);
	return (factor - 1 == nodes);
}

/**
 *_pow_recursion - returns a power factor
 *@a: the value to exponentiate
 *@b: the power to raise x to
 *Return: a ^b or -1 if b is negative
 */

int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * _pow_recursion(a, b - 1));
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree else 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);
	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_left > height_right ? height_left : height_right);
}
