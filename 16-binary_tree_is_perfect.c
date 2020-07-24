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

/**
 * binary_tree_leaves - function that counts the leaves in a  binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0, if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0, if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leaves = 0, height = 0, leaf_l = 0, pow = 1;

	if (!tree)
		return (0);

	leaves = binary_tree_leaves(tree);
	height = binary_tree_height(tree);

	while (leaf_l < height)
	{
		pow = 2 * pow;
		leaf_l++;
	}
	if (leaves == pow)
		return (1);
	else
		return (0);
}
