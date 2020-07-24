#include "binary_trees.h"
/**
 * binary_tree_uncle - function that counts the leaves in a  binary tree
 * @node: pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node; NULL, if node or the parent is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
