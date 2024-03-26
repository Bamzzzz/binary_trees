#include "binary_trees.h"

/**
* binary_tree_insert_left - Inputs a node as the left-child of another node
* @parent: Pointer to the node to insert the left-child in
* @value: Value store in new node
*
* Return: On (Success) Pointer to the new node On (Failure) NULL
*         or if parent is NULL:
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}