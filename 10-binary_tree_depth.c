#include "binary_trees.h"
/**
 * binary_tree_depht - function that measures the depth of a node
 * @tree: pointer to the node to measure the depht
 *
 * Return: 0, if tree is NULL.
 */
size_t binary_tree_depht(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent));
}
