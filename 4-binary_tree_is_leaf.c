#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Write a function that checks if a node is a leaf
 * @node: node to examin
 * Return: if leaf return 1 or not leaf return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
