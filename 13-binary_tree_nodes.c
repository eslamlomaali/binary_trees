#include "binary_trees.h"
/**
 * binary_tree_nodes - Write a function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: tree to calc nodes at least 1 child
 * Return: nodes with children nubers
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  NoDe = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		NoDe += ((tree->left || tree->right) ? 1 : 0);
		NoDe += binary_tree_nodes(tree->left);
		NoDe += binary_tree_nodes(tree->right);
		return (NoDe);
	}
}
