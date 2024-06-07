#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts on the left
 *
 * @parent: parent node
 * @value: value placed in newNode
 *
 * Description: handles case of already existing left child
 *
 * Return: newNode node of type binary_tree_t
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode || !parent)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = parent->left;
	parent->left = newNode;
	if (newNode->left)
		newNode->left->parent = newNode;
	return (newNode);
}
