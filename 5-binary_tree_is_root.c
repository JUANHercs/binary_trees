#include "binary_trees.h"

/**
 *binary_tree_is_root - check if a node is root.
 *@node: A pointer at node.
 * Return: (1) If the node is root, otherwise (0)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
