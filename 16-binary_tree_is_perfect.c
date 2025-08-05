#include "binary_trees.h"

/**
 * height - Count the difference leaves.
 * @node: Pointer to the parent node
 *
 *Return: size_t count.
 */

int get_depth(const binary_tree_t *node)
{
int depth = 1;

if (node == NULL)
	{
	return (0);
	}
while (node->left)
	{
	depth++;
	node = node->left;
	}
return (depth);
}

/**
 * height - Count the difference leaves.
 * @node: Pointer to the parent node
 *
 *Return: size_t count.
 */

int check_perfect(const binary_tree_t *tree, int depth, int level)
{
if (tree == NULL)
	{
	return (1);
	}
if (tree->left == NULL && tree->right == NULL)
	{
	return (level == depth);
	}
if (tree->left == NULL || tree->right == NULL)
	{
	return (0);
	}

return(
	check_perfect(tree->left, depth, level + 1) &&
	check_perfect(tree->right, depth, level + 1));
}

/**
 * height - Count the difference leaves.
 * @node: Pointer to the parent node
 *
 *Return: size_t count.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int depth;

if (tree == NULL)
	{
	return (0);
	}

depth = get_depth(tree);

return (check_perfect(tree, depth - 1, 0));
}

