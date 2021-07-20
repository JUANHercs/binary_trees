#include "binary_trees.h"

/**
 * binary_tree_node -Creates a banary tree node.
 *@parent: apointer to the parent of the node to create.
 *@value: the value of the new node.
 *
 *Return: If an error occurs - Null.
 * other wise -pointer to new nde.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return NULL;
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	parent->left = new_node;
	return (new_node);
}
