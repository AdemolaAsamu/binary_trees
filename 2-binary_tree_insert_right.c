#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserts a new child node on the right
 * @parent: parent node
 * @value: value or data storted in new node
 *
 * Description: new node takes the place of the already existing node
 *
 * Return: newNode node of type binary_tree_t
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode || !parent)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = parent->right;
	newNode->left = NULL;
	parent->right = newNode;
	if (newNode->right)
		newNode->right->parent = newNode;
	return (newNode);
}
