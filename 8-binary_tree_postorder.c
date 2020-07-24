#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through using inorder traversal
 * @tree: pointer to the root node of the tree to delete
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_postrder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
