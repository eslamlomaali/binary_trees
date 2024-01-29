#include "binary_trees.h"
/**
 * binary_tree_size - Write a function that measures the size of a binary tree
 * @tree: tree calc the size for it
 * Return: size for specific tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t xxlarge = 0, righttt = 0, lefttt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lefttt = binary_tree_size(tree->left);
		righttt = binary_tree_size(tree->right);
		xxlarge = righttt + lefttt + 1;
	}
	return (xxlarge);
}
