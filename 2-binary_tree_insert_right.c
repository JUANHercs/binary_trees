#include "binary_trees.h"

/**
 * binary_tree_insert_right - Create a node to right.
 *@parent: Pointer to the parent of the node to create.
 *@value: The value of the new node.
 * Return: If an error occurs - Null other wise -pointer to new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;
	return (new_node);
}
