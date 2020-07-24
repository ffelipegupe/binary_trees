#include "binary_trees.h"
/**
 * binary_tree_height - function that goes through using inorder traversal
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height);
	else
		return (right_height);
}
