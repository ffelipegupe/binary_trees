#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through using pre-order traversal
 * @tree: pointer to the root node of the tree to delete
 * @func: pointer to a function to call for each node
 *
 * Return: 1, if node is a lead; 0, otherwise or if node equals NULL
 */
int binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_peorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
