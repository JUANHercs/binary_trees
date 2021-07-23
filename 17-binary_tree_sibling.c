#include "binary_trees.h"

/**
 *binary_tree_sibling - finds sibling of a node
 *@node: is a pointer to the node to find the sibling
 *Return: sibling of the node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	temp = node->parent;
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (temp->right == NULL || temp->left == NULL)
		return (NULL);
	if (temp->left->n == node->n)
		return (temp->right);
	return (temp->left);
}
