#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0, if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->rigth) + 1);
}
