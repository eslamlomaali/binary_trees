#include "binary_trees.h"

/**
 * binary_tree_is_root - Write a function that checks if a given node is root
 * @node: Node to examin
 * Return:if root return 1 or not root return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
