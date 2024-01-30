#include "binary_trees.h"
/**
 * new_binary_tree_height - measures the height of a binary tree.
 * @tree:root node of tree
 * Return: NULL or Height
 */
size_t new_binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int lefttt = 1, righttt = 1;

		if (tree->right)
			righttt +=  new_binary_tree_height(tree->right);
		if (tree->left)
			lefttt +=  new_binary_tree_height(tree->left);
		if (lefttt > righttt)
			return (lefttt);
		else
			return (righttt);
	}
	else
		return (0);
}
/**
 * binary_tree_balance - Write a function that measures
 * the balance factor of a binary tree
 * @tree: root node of tree
 * Return: if NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (new_binary_tree_height(tree->left)
		- new_binary_tree_height(tree->right));
}
