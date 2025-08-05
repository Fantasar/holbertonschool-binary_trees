#include "binary_trees.h"

/**
 * binary_tree_postorder - Preorder the tree node left
 * @tree: Pointer to the parent node
 * @func: Value to put in the new node
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL || func == NULL)
	{
	return;
	}
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
