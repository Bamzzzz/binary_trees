#include "binary_trees.h"

/**
* binary_tree_preorder - functions that work through a binary tree
using pre-order traversal
* @tree: Pointer to the root node of tree to traverse
* @func: Pointer to a function to call for each node.
The value in the node must be passed as an argument to this function.
*
* Return: Nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
