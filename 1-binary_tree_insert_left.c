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

binary_tree_t *new_node, *temp_node;


if (parent == NULL)
return (NULL);

new_node = binary_tree_node(value, parent);
if (new_node == NULL)
return (NULL);

temp_node = parent->left;
parent->left = new_node;
new_node->left = temp_node;

if (temp_node != NULL)
temp_node->parent = new_node;
return (new_node);
}
