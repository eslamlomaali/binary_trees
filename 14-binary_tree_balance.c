#include "binary_trees.h"
/**
 * new_binary_tree_height - calc the height of a binary tree.
 * @tree: root node of the tree
 * Return: 0 , if tree is NULL
 */
size_t new_binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int lefttt = 1, righttt = 1;

		if (tree->right)
			righttt +=  binary_tree_height(tree->right);
		if (tree->left)
			lefttt +=  binary_tree_height(tree->left);
		if (lefttt > righttt)
			return (lefttt);
		else
			return (righttt);
	}
	else
		return (0);
}
/**
 * binary_tree_balance - Write a function that measures the
 * balance factor of a binary tree
 * @tree: root node of the tree to calc the balance factor.
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (new_binary_tree_height(tree->left)
		- new_binary_tree_height(tree->right));
}

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
