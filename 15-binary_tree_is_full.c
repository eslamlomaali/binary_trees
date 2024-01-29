#include "binary_trees.h"
/**
 * binary_tree_is_full - Write a function that checks if a binary tree is full
 * @tree: tree to check if a binary tree is full or not
 * Return: 1 is full , 0 not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lefttt = 0, righttt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			lefttt = binary_tree_is_full(tree->left);
			righttt = binary_tree_is_full(tree->right);
			if (lefttt == 0 || righttt == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
