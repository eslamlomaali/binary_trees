#include "binary_trees.h"
/**
 * binary_tree_insert_right - Write a function that inserts a node as
 * the right-child of another node
 * @parent: parent for node
 * @value: node value
 * Return: new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *N_Node;

	if (parent == NULL)
	{
		return (NULL);
	}

	N_Node = binary_tree_node(parent, value);
	if (N_Node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		N_Node->right = parent->right;
		parent->right->parent = N_Node;
	}
	parent->right = N_Node;
	return (N_Node);
}
