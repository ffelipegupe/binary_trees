#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a node is a leaf
 * @node: pointer to the root node of the tree to delete
 *
 * Return: 1, if node is a root; 0, otherwise or if node equals NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && (!node->parent))
		return (1);
	return (0);
}
