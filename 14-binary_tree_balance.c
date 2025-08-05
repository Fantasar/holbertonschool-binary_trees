#include "binary_trees.h"

/**
 * height - Count the difference leaves.
 * @node: Pointer to the parent node
 *
 *Return: size_t count.
 */

int height(const binary_tree_t *node)
{
int left;
int right;
if (node == NULL)
	{
	return (0);
	}
left = height(node->left);
right = height(node->right);

return(1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - Count the leaves.
 * @tree: Pointer to the parent node
 *
 *Return: size_t count.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
	{
	return (0);
	}
return (height(tree->left) - height(tree->right));
}
