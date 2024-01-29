#include "binary_trees.h"
/**
 * binary_tree_insert_left - Write a function that inserts a node as
 * the left-child of another node
 * @parent: parent for the node
 * @value: node value
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		N_Node->left = parent->left;
		parent->left->parent = N_Node;
	}
	parent->left = N_Node;
	return (N_Node);
}
