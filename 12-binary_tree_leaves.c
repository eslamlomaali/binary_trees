#include "binary_trees.h"
/**
 * binary_tree_leaves - Write function that counts the leaves in a binary tree
 * @tree: tree to calc the number of leaf nodes
 * Return: leaves node nummber
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t dead = 0, lefttt = 0, righttt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lefttt = binary_tree_leaves(tree->left);
		righttt = binary_tree_leaves(tree->right);
		dead = lefttt + righttt;
		return ((!lefttt && !righttt) ? dead + 1 : dead + 0);
	}
}
