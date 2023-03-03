#include "binary_trees.h"

/**
 * heap_to_sorted_array - Converts a binary max heap to a sorted array
 *
 * @heap: Pointer to the root node of the heap
 * @size: Address to store the size of the resulting array
 *
 * Return: A pointer to the sorted array
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
    int *array, *tmp;
    size_t i;

    if (!heap || !size)
        return (NULL);

    array = malloc(heap->size * sizeof(int));
    if (!array)
        return (NULL);

    tmp = array;
    heap_extract(&heap, tmp++);
    for (i = 1; i < heap->size; i++)
        heap_extract(&heap, tmp++);

    *size = i;
    return (array);
}

