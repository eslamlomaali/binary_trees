#include "binary_trees.h"

/**
 * binary_tree_node - Write a function that creates a binary tree node
 * @parent: parent node
 * @value: node value
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *N_Node;

	N_Node = malloc(sizeof(binary_tree_t));
	if (N_Node == NULL)
	{
		return (NULL);
	}
	N_Node->n = value;
	N_Node->parent = parent;
	N_Node->left = NULL;
	N_Node->right = NULL;
	return (N_Node);
}
