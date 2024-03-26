#include "binary_trees.h"

/**
* binary_tree_is_root - To checks if a node is the root
* @node: check pointer to a node
*
* Return: 1(success) if node is root, or 0(fails) if otherwise or node is NULL
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
