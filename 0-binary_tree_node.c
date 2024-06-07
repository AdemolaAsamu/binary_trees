#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent; This is the Parent Node
 * @value: Value of the new node
 *
 * Return: new node of type binary_tree_t
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode) return NULL;
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}
