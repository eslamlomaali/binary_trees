#include "binary_trees.h"

/**
 * binary_tree_height - Write function that measures the height of binary tree
 * @tree: tree to check
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefttt = 0;
	size_t righttt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lefttt = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			righttt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((lefttt > righttt) ? lefttt : righttt);
	}
}
