#include "binary_trees.h"
/**
 * tree_is_perfect_or_not - function checking that tree is perfect or not
 * @tree: tree to check if it is perfect or not
 * Return: 0 if is not a perfect or num of height
 */
int tree_is_perfect_or_not(const binary_tree_t *tree)
{
	int lefttt = 0, righttt = 0;

	if (tree->left && tree->right)
	{
		lefttt = 1 + tree_is_perfect_or_not(tree->left);
		righttt = 1 + tree_is_perfect_or_not(tree->right);
		if (righttt == lefttt && righttt != 0 && lefttt != 0)
			return (righttt);
		return (0);
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
/**
 * binary_tree_is_perfect - Write a function that checks if tree is perfect
 * @tree: tree to check
 * Return: 1 perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int val = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		val = tree_is_perfect_or_not(tree);
		if (val != 0)
		{
			return (1);
		}
		return (0);
	}
}
