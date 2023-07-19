#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array of an integers
 * @size: the size of the array
 * @cmp: a pointer to a function
 *
 * Return: the index of the first element for which the cmp function
 * doest return 0, return (-1) if no element matches Or size <= 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (0);
}
