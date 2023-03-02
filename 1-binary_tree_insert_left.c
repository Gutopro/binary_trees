#include "binary_trees.h"

/**
*
* binary_tree_left_node - inserts the node as the left child of another node
*
* @parent: a pointer to the parent of the node created
*
* @value: the value to be inserted into node
*
* Return: if parent is empty return null else return new node
*
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{

binary_tree_t *new;


if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
