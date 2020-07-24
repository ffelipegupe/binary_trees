#include "binary_trees.h"
/**
 * binary_tree_is_full - function that goes through using inorder traversal
 * @tree: pointer to the root node of the tree to check
 *
 * Return: nothing
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_f = 0, right_f = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_f = left_f + binary_tree_is_full(tree->left);
	if (tree->right)
		right_f = right_f + binary_tree_is_full(tree->right);
	if ((left_f + right_f) % 2 == 0)
		return (1);
	else
		return (0);
}
