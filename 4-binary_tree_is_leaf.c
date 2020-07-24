#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to the root node of the tree to delete
 *
 * Return: 1, if node is a lead; 0, otherwise or if node equals NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && (!node->left && !node->right))
		return (1);
	return (0);
}
