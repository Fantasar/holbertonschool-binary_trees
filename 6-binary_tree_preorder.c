#include "binary_trees.h"

/**
 * binary_tree_preorder - Preorder the tree node
 * @tree: Pointer to the parent node
 * @func: Value to put in the new node
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL || func == NULL)
	{
	return;
	}
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
