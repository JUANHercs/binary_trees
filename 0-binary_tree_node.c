#include "binary_trees.h"

/**
 * binary_tree_node -Creates a banary tree node.
 *@parent: apointer to the parent of the node to create.
 *@value: the value of the new node.
 *
 *Return: If an error occurs - Null.
 * other wise -pointer to new nde.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
