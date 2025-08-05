#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle node, or NULL if none or if node is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *dinosaure;
if (node == NULL || node->parent == NULL
	|| node->parent->parent == NULL)
	{
	return (NULL);
	}
dinosaure = node->parent->parent;

if (dinosaure->left == node->parent)
	{
	return (dinosaure->right);
	}
return (dinosaure->left);
}
