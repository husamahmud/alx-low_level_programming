#include "function_pointers.h"

/**
 * array_iterator - array_iterator
 * @array: pointer to an array of an integers
 * @size: the size of the array
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
