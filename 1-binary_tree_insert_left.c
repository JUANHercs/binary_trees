#include "binary_trees.h"

/**
 * binary_tree_node -Creates a banary tree node.
 *@parent: apointer to the parent of the node to create.
 *@value: the value of the new node.
 *
 *
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	temp = parent;
	new_node->n = value, new_node->parent = parent,
	new_node->left = NULL, new_node->right = NULL;
	if (temp->left != NULL)
		new_node->left = temp->left,
    	temp->left = new_node;
	return (new_node);
}
