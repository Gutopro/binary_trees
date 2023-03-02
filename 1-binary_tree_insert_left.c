#include "binary_trees.h"

/**
 *binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newleft_node = NULL;

if (!parent)
return (NULL);

newleft_node = binary_tree_node(parent, value);
if (!newleft_node)
return (NULL);

if (parent->left)
{
parent->left->parent = newleft_node;
newleft_node->left = parent->left;
}
parent->left = newleft_node;

return (newleft_node);
}
