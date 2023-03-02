#include "binary_trees.h"

/**
* binary_tree_t - creates a binary tree node
* @parent: pointer to the parent of the node to create
* @value: the value to be inserted in the node
*
* Return: if error occurs return NUll
*         else return new
*/

binary_tree_t *binary_tree_node(binary_tree_t, *parent, int value)
{

binary_tree_t *new;

new = malloc(sizeof(binary_tree_t));
if (!new)
return (Null);

new->n = value;
new->parent = parent;
new->left = Null;
new->right = Null;

return (new);
}
