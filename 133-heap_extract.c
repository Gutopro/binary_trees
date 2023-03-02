#include "binary_trees.h"
/**
 * heap_extract - Extracts the root node of a Max Binary Heap
 * @root: Double pointer to the root node of the heap
 *
 * Return: Value stored in the root node, or 0 on failure
 */
int heap_extract(heap_t **root)
{
    int value;
    heap_t *node, *temp;

    if (!root || !*root)
        return (0);

    node = *root;
    value = node->n;

    if (!node->left && !node->right)
    {
        *root = NULL;
        free(node);
        return (value);
    }

    temp = last_node(*root);
    if (temp->parent->left == temp)
        temp->parent->left = NULL;
    else
        temp->parent->right = NULL;

    node->n = temp->n;
    free(temp);

    heapify_down(*root);

    return (value);
}
