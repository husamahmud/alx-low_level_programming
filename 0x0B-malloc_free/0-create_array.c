#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: the size of the array to be created
 * @c: the character to initialize the array with
 *
 * Return: On success, the function returns a pointer to the newly
 * created array of characters. On failure, the function returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (int)size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
